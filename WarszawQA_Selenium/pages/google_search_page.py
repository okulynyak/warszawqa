#!/usr/bin/env python
# -*- coding: utf-8 -*-

# Example code for WarszawQA
# created by okulynyak@gmail.com

from extentions.base_page import Base_page
from extentions.repository import Google_main_page as locators


class Google_search_page(Base_page):
    
    def fill_in_search_phrase(self, phrase):
        self.selenium_wait.wait_for_element_present(locators.search_field)
        input_field_elem = self.selenium.find_element_by_xpath(locators.search_field)
        input_field_elem.clear()
        input_field_elem.click()
        input_field_elem.send_keys(unicode(phrase))
        
    def click_search(self):
        self.selenium_wait.wait_for_element_present(locators.search_button)
        self.selenium.find_element_by_xpath(locators.search_button).click()
        
    def search_for_phrase(self,
                          phrase):
        self.fill_in_search_phrase(phrase)
        self.click_search()
        return self.selenium_wait.wait_for_element_present_no_exception(
            ".//*[@name='q' and @value='{0}']".format(phrase))