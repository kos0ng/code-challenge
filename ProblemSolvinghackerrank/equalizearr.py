#!/bin/python

import math
import os
import random
import re
import sys

# Complete the equalizeArray function below.
def equalizeArray(arr):
	uniq=[]
	cnt=[]
	for i in arr:
		if(i not in uniq):
			uniq.append(i)
			cnt.append(arr.count(i))
	print len(arr)-max(cnt)
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    arr = map(int, raw_input().rstrip().split())

    result = equalizeArray(arr)
    print result

    # fptr.write(str(result) + '\n')

    # fptr.close()
