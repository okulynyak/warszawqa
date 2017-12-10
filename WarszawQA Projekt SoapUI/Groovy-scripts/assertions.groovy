println "Assertions started"
import groovy.json.JsonSlurper;
import java.io.File;

def Assertions = new File(properties['assertionsPath'] + File.separator, "Assertions.txt").readLines()
def failedMethods = [:]
def assertionsResult = new java.io.File(properties['resultPath'] + File.separator, "Assertions_result.txt")
assertionsResult.write('', "UTF-8")
methodsFromProperties = methodsFromProperties(properties['EnvProperties'])
methodsNameAndPath = methodsNameAndPathDic(methodsFromProperties)
checkResponseExistOrEmpty = checkResponseExistOrEmpty(methodsNameAndPath, failedMethods)
withoutFailedMethod = withoutFailedMethod(methodsNameAndPath, failedMethods)
checkAssertions = checkAssertions(Assertions, withoutFailedMethod, failedMethods)
withoutFailedMethod = withoutFailedMethod(methodsNameAndPath, failedMethods)
resultToFile = resultToFile(methodsFromProperties, failedMethods, assertionsResult, methodsNameAndPath)
println "Assertions finished"

assert failedMethods==[:] : "Assertion failed"

def methodsFromProperties (path) {
	//this method returns list of methods marked for test in soapUI properties file
	def dataList = [:];
	def params;
	def key;
	def value;
	File props = new File(path);
	props.eachLine { line ->
		params = line.split("=");
		key = params[0];
		value=params[1];
		dataList[key]=value
	};
	def methods = []
	for (item in dataList) {
		if (item.value == '1') {
			methods.add(item.key)
		}
	};
	return methods
}

def methodsNameAndPathDic (methodsFromProperties) {
	//this method returns dictionary with Method name and Path to this method
	def methodsNameAndPath = [:];
	def name;
	def path;
	for (int i=0; i<methodsFromProperties.size();i++){
		name = methodsFromProperties[i]
		path = properties['methodsPath'] + methodsFromProperties[i] + File.separator + "output" + File.separator + properties['Environment'] + File.separator + "response_" + methodsFromProperties[i] + ".xml"
		methodsNameAndPath[name]=path
	};
	return  methodsNameAndPath
}

def checkResponseExistOrEmpty (methodsNameAndPath, failedMethods) {
	//this method check that response file exists and is not empty
	for (int i=0; i<methodsNameAndPath.size(); i++){
		name = methodsNameAndPath.keySet()[i]
		path = new File(methodsNameAndPath.values()[i])
		if (path.exists()){
			if (path.text.length()==0){
				failedMethods[name]='response file empty'
			}
		}
		else {
			failedMethods[name]='response file does not exist'
		}
	};
	return failedMethods
}

def withoutFailedMethod (methodsNameAndPath, failedMethods) {
	def withoutFailedMethod = [:];
	withoutFailedMethod = methodsNameAndPath.clone()
	for (int i=0; i<failedMethods.size();i++){
		withoutFailedMethod.remove(failedMethods.keySet()[i])
	};
	return withoutFailedMethod
}

def checkAssertions (Assertions, withoutFailedMethod, failedMethods) {
	//this method check generic assertions in response file
	for (int i=0; i<withoutFailedMethod.size();i++){
		name = withoutFailedMethod.keySet()[i]
		path = new File(withoutFailedMethod.values()[i])
		for (int j=0; j<Assertions.size();j++){
			if (!path.text.contains(Assertions[j])){
				failedMethods[name]='not contains ' + Assertions[j] + ' in response'
			}
		}
	};
	return failedMethods
}

def resultToFile(methodsFromProperties, failedMethods, assertionsResult, methodsNameAndPath) {
	assertionsResult.append('***Failed methods***')
	failedMethods.each {key, value ->
		assertionsResult.append('\n' + key + ' - ' + value)
	}
	assertionsResult.append('\n\n***Passed methods***')
	result = withoutFailedMethod(methodsNameAndPath, failedMethods)
	result.each {key, vaule ->
		assertionsResult.append('\n' + key)
	}
	assertionsResult.append('\n\n***Methods marked for tests***')
	methodsFromProperties.each { value ->
		assertionsResult.append('\n' + value)
	};
}
