import pytest
import sys
import os
from extentions.base_test import Base_test
from extentions.base_page import Base_page
#this will change encoding for all sessionss
reload(sys)
sys.setdefaultencoding('UTF8')


def pytest_addoption(parser):
    parser.addoption(
        "--props",
        action="store",
        default="",
        help="Here provide a file with environment variable to run tests:\
              'csv' - will used csv file with the same name as test method")

def pytest_generate_tests(metafunc):
    test_file_name = metafunc.module.__name__.split(".")[1]
    test_method_name = metafunc.function.__name__
    params = []
    if 'props' in metafunc.fixturenames:
        startwith_value = metafunc.config.option.props
        path = os.path.join(
            os.getcwd().rsplit("tests", 1)[0],
            "config")
        if "xls" in startwith_value:
            sheet = []
            if "test_login" != str(test_file_name):
                sheet.append(test_method_name)
            dicti = Base_test.Excell_api().read_xls(
                path,
                startwith_value.split("xls-")[1],
                sheet)
            params.append(dicti)
        elif "csv" in startwith_value:
            file_with_env_var = "Environment_variables.csv"
            env_vars = Base_test.CSV_api().read_csv_to_dict_table(
                os.path.join(path,
                             file_with_env_var))[0]
            file_with_test_conf = "{0}".format(test_method_name)
            test_configuration = Base_test.CSV_api().read_csv_to_dict_table(
                os.path.join(path,
                             file_with_test_conf + ".csv"))
            for item in test_configuration:
                common_dict = {}
                common_dict.update(env_vars)
                common_dict.update(item)
                params.append(common_dict)
            #print test_configuration
            #read 2 csv files and return dictionady
        else:
            raise Exception("You should prowide --props option\
                             as <xls-\{name of file\}>\
                             or with <csv> value\
                             to read file type with configuration")

        #print params
        metafunc.parametrize('props', params)
