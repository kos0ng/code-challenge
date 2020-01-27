#!/bin/python

import math
import os
import random
import re
import sys

# Complete the findDigits function below.
def findDigits(n):
	count=0
	for i in str(n).replace('0',''):
		if(n%int(i)==0):
			count+=1
	print count
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(raw_input())

    for t_itr in xrange(t):
        n = int(raw_input())

        result = findDigits(n)

        # fptr.write(str(result) + '\n')

    # fptr.close()
