#!/bin/python

import math
import os
import random
import re
import sys

# Complete the twoStrings function below.
def twoStrings(s1, s2):
	done=[]
	list_char="abcdefghijklmnopqrstuvwxyz"
	for i in list_char:
		if(s1.count(i)>=1 and s2.count(i)>=1):
			return "YES"
	return "NO"


if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(raw_input())

    for q_itr in xrange(q):
        s1 = raw_input()

        s2 = raw_input()

        result = twoStrings(s1, s2)
        print result
    #     fptr.write(result + '\n')

    # fptr.close()
