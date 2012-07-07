import unittest
from google.appengine.ext import db

class SuccessFailError(unittest.TestCase):
    def test_success(self):
        self.assertTrue(True)
