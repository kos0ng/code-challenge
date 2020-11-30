#!/bin/python

import math
import os
import random
import re
import sys

# Complete the makingAnagrams function below.
def makingAnagrams(s1, s2):
	done=[]
	counterleft=0
	counterright=0
	counterremain=0
	if(len(s1)<len(s2)):
		for i in s1:
			if(i not in done):
				tmp1=s1.count(i)
				tmp2=s2.count(i)
				counterremain+=tmp2
				if(tmp1<tmp2):
					counterright+=tmp2-tmp1
				elif(tmp1>tmp2):
					counterleft+=tmp1-tmp2
				done.append(i)
	else:
		for i in s2:
			if(i not in done):
				tmp1=s2.count(i)
				tmp2=s1.count(i)
				counterremain+=tmp2
				if(tmp1<tmp2):
					counterright+=tmp2-tmp1
				elif(tmp1>tmp2):
					counterleft+=tmp1-tmp2
				done.append(i)
	return counterleft+counterright+max(len(s1),len(s2))-counterremain
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s1 = raw_input()

    s2 = raw_input()

    result = makingAnagrams(s1, s2)
    print result
    # fptr.write(str(result) + '\n')

    # fptr.close()
