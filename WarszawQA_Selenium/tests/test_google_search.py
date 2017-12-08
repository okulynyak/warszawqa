#!/usr/bin/env python
#-*- coding: utf-8 -*-

import pytest
from unittestzero import Assert

from extentions.base_test import Base_test
from pages.google_search_page import Google_search_page

class Test(Base_test):

    @pytest.mark.nondestructive
    def test_google_search(self,
                           selenium,
                           base_url,
                           props):
        
        phrase_to_search = props['phrase_to_search']
        
        Assert.true(
            Google_search_page(selenium, base_url).search_for_phrase(
                phrase_to_search),
            "search for phrase failed")