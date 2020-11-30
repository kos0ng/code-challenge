#!/bin/python

import math
import os
import random
import re
import sys

# Complete the missingNumbers function below.
def missingNumbers(arr, brr):
	done=[]
	cnt=len(brr)-len(arr)
	res=[]
	for i in brr:
		if(i not in done):
			done.append(i)
			if(arr.count(i)!=brr.count(i)):
				res.append(i)
				cnt-=1
		if(cnt==0):
			break
	res.sort()
	return res

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    arr = map(int, raw_input().rstrip().split())

    m = int(raw_input())

    brr = map(int, raw_input().rstrip().split())

    result = missingNumbers(arr, brr)
    print result
    # fptr.write(' '.join(map(str, result)))
    # fptr.write('\n')

    # fptr.close()
