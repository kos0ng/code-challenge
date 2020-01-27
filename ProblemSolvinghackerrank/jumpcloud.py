#!/bin/python

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c):
	counter=0
	pos=0
	while pos!=len(c)-1:
		if(c[(pos+2)%(len(c))]!=1 and (pos+2)%(len(c))>pos):
			pos+=2
			counter+=1
		else:
			pos+=1
			counter+=1
	return counter
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    c = map(int, raw_input().rstrip().split())

    result = jumpingOnClouds(c)
    print result

    # fptr.write(str(result) + '\n')

    # fptr.close()
