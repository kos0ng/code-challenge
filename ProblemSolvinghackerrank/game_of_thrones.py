#!/bin/python

import math
import os
import random
import re
import sys

# Complete the gameOfThrones function below.
def gameOfThrones(s):
	counter=[]
	done=[]
	for i in s:
		if(i not in done):
			done.append(i)
			counter.append(s.count(i)%2)
	if(counter.count(1)>1):
		return "NO"
	else:
		return "YES"

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = raw_input()

    result = gameOfThrones(s)
    print result
    # fptr.write(result + '\n')

    # fptr.close()
