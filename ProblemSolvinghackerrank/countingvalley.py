#!/bin/python

import math
import os
import random
import re
import sys

# Complete the countingValleys function below.
def countingValleys(n, s):
	total_valley=0;
	tmp=0;
	for i in range(n):
		if(s[i]=='U'):
			tmp+=1
		else:
			tmp-=1
		if(tmp==0 and s[i]=='U'):
			total_valley+=1
	return total_valley



if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    s = raw_input()

    result = countingValleys(n, s)

    print result
    # fptr.write(str(result) + '\n')

    # fptr.close()
