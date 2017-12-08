#!/usr/bin/env python
#-*- coding: utf-8 -*-

# Example code for WarszawQA
# created by okulynyak@gmail.com

from selenium.webdriver.common.by import By

class Repo_common(object):
    """
    this class contains common locators for all pages in project
    we are using XPATH as find technology in selenium.
    That is Why all attributes are string
    """
    #header buttons
    
    #footer buutons
    


class Google_main_page(Repo_common):
    search_field = ".//*[@name='q']"
    search_button = ".//*[@name='btnK']"
    
    