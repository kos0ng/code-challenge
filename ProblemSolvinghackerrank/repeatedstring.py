#!/bin/python

import math
import os
import random
import re
import sys

# Complete the repeatedString function below.
def repeatedString(s, n):
    if(n<len(s)):
    	return s[:3].count('a')
    tmp=s.count('a')
    a=n/len(s)
    return tmp*a+s[:n%(len(s)*a)].count('a')
			
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = raw_input()

    n = int(raw_input())

    result = repeatedString(s, n)
    print result
    # fptr.write(str(result) + '\n')

    # fptr.close()
