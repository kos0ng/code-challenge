#!/bin/python

import math
import os
import random
import re
import sys

# Complete the utopianTree function below.
def utopianTree(n):
	base=1
	for i in range(1,n+1):
		if(i%2!=0):
			base*=2
		else:
			base+=1
	return base
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(raw_input())

    for t_itr in xrange(t):
        n = int(raw_input())

        result = utopianTree(n)
        print result
        # fptr.write(str(result) + '\n')

    # fptr.close()
