#!/bin/python

import math
import os
import random
import re
import sys

# Complete the minimumDistances function below.
def minimumDistances(a):
	res=-1
	for i in range(len(a)):
		for j in range(i+1,len(a)):
			if(a[i]==a[j]):
				tmp=i-j
				print tmp
				if(tmp<0):
					tmp*=-1
				if(res==-1):
					res=tmp
				else:
					if(tmp<=res):
						res=tmp
	print res


if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    a = map(int, raw_input().rstrip().split())

    result = minimumDistances(a)

    # fptr.write(str(result) + '\n')

    # fptr.close()
