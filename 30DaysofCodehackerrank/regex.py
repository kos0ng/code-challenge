#!/bin/python

import math
import os
import random
import re
import sys

def checkemail(emailID):
	x = re.search("^.*@gmail.com$", emailID) 
	if(x):
		print 'ada'


if __name__ == '__main__':
    N = int(raw_input())

    for N_itr in xrange(N):
        firstNameEmailID = raw_input().split()

        firstName = firstNameEmailID[0]

        emailID = firstNameEmailID[1]
        checkemail(emailID)