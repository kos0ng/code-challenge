#!/bin/python

import math
import os
import random
import re
import sys

# Complete the theLoveLetterMystery function below.
def theLoveLetterMystery(s):
	tmp=map(ord,s)
	res=0
	for i in range(len(s)//2):
		res+=abs(tmp[i]-tmp[len(s)-1-i])
	return res
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(raw_input())

    for q_itr in xrange(q):
        s = raw_input()

        result = theLoveLetterMystery(s)
        print result
    #     fptr.write(str(result) + '\n')

    # fptr.close()
