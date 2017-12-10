/*
this file runs asserton check and responses
*/
assertionError = true
//run asssertion checker
try {
	evaluate(new File("Groovy-scripts/assertions.groovy"));
	assertionError = false;
	println ("Assertions passed")
} catch (AssertionError e) {
	assertionError = true;
	println ("Assertions checked, error occured")
}
//assume results
assert assertionError == false : "\n\n !!!!! There was assertion errors !!!!! \n\n"
