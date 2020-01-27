#!/bin/python

import math
import os
import random
import re
import sys

# Complete the appendAndDelete function below.
def appendAndDelete(s, t, k):
	commonlength=0
	for i in range(min(len(s),len(t))):
		if(s[i]==t[i]):
			commonlength+=1
		else:
			break
	if(len(s)+len(t)-2*commonlength>k):
		print 'No'
	elif((len(s)+len(t)-2*commonlength)%2==k%2):
		print 'Yes'
	elif(len(s)+len(t)-k<0):
		print 'Yes'
	else:
		print 'No'
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = raw_input()

    t = raw_input()

    k = int(raw_input())

    result = appendAndDelete(s, t, k)

    # fptr.write(result + '\n')

    # fptr.close()
