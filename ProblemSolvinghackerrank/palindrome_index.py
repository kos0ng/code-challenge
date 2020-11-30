#!/bin/python

import math
import os
import random
import re
import sys

# Complete the palindromeIndex function below.
def palindromeIndex(s):
	tmp=map(ord,s)
	res=-1
	counter=0
	i=0
	j=len(s)-1
	while i < len(tmp)/2:
		tmp2=tmp[i]-tmp[j]
		if(tmp2!=0):
			counter+=1
			if(tmp[i+1:j+1]==tmp[i+1:j+1][::-1]):
				res=i
				del tmp[i]
				j-=1
			else:
				res=j
				del tmp[j]
				j-=1
		else:
			i+=1
			j-=1
		if(counter>1):
			return -1
	return res


if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(raw_input())

    for q_itr in xrange(q):
        s = raw_input()

        result = palindromeIndex(s)
        print result
    #     fptr.write(str(result) + '\n')

    # fptr.close()
