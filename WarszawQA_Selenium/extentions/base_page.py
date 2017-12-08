# You can obtain one at http://mozilla.org/MPL/2.0/.
# Example code for WarszawQA
# created by okulynyak@gmail.com

import time
import sys
import os
import shutil
import datetime
import random
import string
import math
#import Selenium modules
from selenium.webdriver.common.by import By
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.common.keys import Keys
from selenium.common.exceptions import NoSuchElementException
from selenium.common.exceptions import ElementNotVisibleException
from selenium.common.exceptions import StaleElementReferenceException
from selenium.common.exceptions import TimeoutException
from selenium.common.exceptions import WebDriverException
from selenium.common.exceptions import MoveTargetOutOfBoundsException
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.common.by import By
from selenium.webdriver.support import expected_conditions as EC

#from extentions.repository import Repo_common
from extentions.repository import *


class Base_page(object):
    """ Basic class for all pages classes """
    def __init__(self, testsetup, base_url=""):
        """
        Constructor
        """
        self.testsetup = testsetup
        self.base_url = base_url
        self.selenium = testsetup
        self._selenium_root = hasattr(self, '_root_element') and self._root_element or self.selenium
        if len(base_url)>0:
            self.url_open()
            self.maximize_window()

 
    @property
    def table_operations(self):
        return Base_page.Table_operations(self.selenium, self.selenium_wait)

    @property
    def selenium_wait(self):
        return Base_page.Selenium_waits(self.selenium)

    @property
    def operate_field(self):
        return Base_page.Field_operators(self.selenium, self.selenium_wait)

    @property
    def navigate(self):
        return Base_page.Navigation(self.selenium, self.selenium_wait)

    @property
    def random(self):
        return Base_page.String_generators()


    def url_open(self):
        self.selenium.get(self.base_url)
        self.maximize_window()

    def maximize_window(self):
        try:
            self.selenium.maximize_window()
        except WebDriverException:
            pass

    def teardown_driver(self):
        '''closing the browser instance'''
        self.selenium.close()

  
    class Table_operations():
        """
        This class contains different methods available in tables
        """
        def __init__(self, selenium, selenium_wait):
            '''Constructor. Here we use to give webdriver from Base_page to do all actions'''
            self.selenium = selenium
            self.selenium_wait = selenium_wait
            


    class Field_operators(object):
        '''class for variuos methods operating on generic fields in WISE application'''

        def __init__(self, selenium, selenium_wait):
            '''Constructor. Here we use to give webdriver from Base_page to do all actions'''
            self.selenium = selenium
            self.selenium_wait = selenium_wait

 

    class Selenium_waits(object):
        """
        Class for methods for waiting element, for checking status of elements etc.
        each instance of Base_page class getting attribute 'selenium_wait' as instance
        of this class
        """
        def __init__(self, selenium):
            '''Constructor. Here we use to give webdriver from Base_page to do all actions'''
            self.selenium = selenium

        def wait_for_element_present(self, locator, wait=10):
            '''Use this wait to check if new element is in code(when going to another page, etc.)'''
            for i in range(wait):
                try:
                    self.selenium.find_element_by_xpath(locator)
                    found = True
                    break
                except NoSuchElementException:
                    time.sleep(1)
                    found = False
            if found == False:
                raise Exception ("-wait_for_element_present- did not found XPATH locator >{0}< during >{1}<".format(locator, wait))
            return found

        def wait_for_element_present_no_exception(self, locator, wait=10):
            '''Use this wait to check if new element is in code(when going to another page, etc.)
            Does not raise an exception'''
            for i in range(wait):
                try:
                    self.selenium.find_element_by_xpath(locator)
                    found = True
                    break
                except:
                    time.sleep(1)
                    found = False
            return found

        def is_element_present(self, xpath):

            try:
                print self.selenium.find_element_by_xpath(xpath)
                return True
            except NoSuchElementException:
                return False


            return self.wait_for_message_and_wait_for_release_it(wait).keys()[0] == message

        def wait_for_value_in_attribute(self, element_locator,
                                        attribute_name, value,
                                        raise_exception=False,
                                        exception_message="",
                                        timeout=10):
            '''
            waits and returns True
            when some element in html will change own attribute's value
            '''
            result = False
            self.wait_for_element_present(element_locator, timeout)
            for i in range(timeout):
                if (str(self.selenium.find_element_by_xpath(element_locator).get_attribute(attribute_name)) == str(value)):
                    result = True
                    break
                else:
                    time.sleep(1)
            if not result:
                if raise_exception:
                    if not (len(exception_message) > 0):
                        exception_message = "attribute {0} had not gotten an axpected value {1}".format(attribute_name, value)
                    raise Exception (exception_message)
            return result


    class Navigation(object):
        """ Here are methods common for all pages 
        """

        def __init__(self, selenium, selenium_wait):
            '''Constructor. Here we use to give webdriver from Base_page to do all actions'''
            self.selenium = selenium
            self.selenium_wait = selenium_wait
