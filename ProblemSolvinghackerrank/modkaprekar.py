#!/bin/python

import math
import os
import random
import re
import sys

# Complete the kaprekarNumbers function below.
def kaprekarNumbers(p, q):
	result=0
	for i in range(p,q+1):
		quadr=str(i**2)
		if(len(quadr)%2==0):
			tmp=int(quadr[len(str(i)):])+int(quadr[:len(str(i))])
		elif(len(quadr)==1):
			tmp=int(quadr)
		else:
			tmp=int(quadr[len(str(i))-1:])+int(quadr[:len(str(i))-1])
		if(tmp==i):
			print i,
			result+=1
	return result
if __name__ == '__main__':
    p = int(raw_input())

    q = int(raw_input())

    x=kaprekarNumbers(p, q)
    if(x==0):
    	print "INVALID RANGE"
