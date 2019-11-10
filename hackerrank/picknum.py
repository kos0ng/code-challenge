#!/bin/python

import math
import os
import random
import re
import sys

#
# Complete the 'pickingNumbers' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#

def pickingNumbers(a):
    tmp2=[]
    for i in a:
    	tmp=[]
    	tmp.append(i)
    	c=a
    	c.remove(i)
    	for j in c:
    		b=i-j
    		if(b<0):
    			b=b*-1
    		if(b<=1):
    			tmp.append(j)
    	if(max(tmp)!=i and min(tmp)!=i):
    		if(tmp.count(max(tmp))<tmp.count(min(tmp))):
    			for x in range(tmp.count(max(tmp))):
    				tmp.remove(max(tmp))
    		else:
    			for x in range((tmp.count(min(tmp)))):
    				tmp.remove(min(tmp))
    	tmp2.append(len(tmp))
    return max(tmp2)



if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input().strip())

    a = map(int, raw_input().rstrip().split())

    result = pickingNumbers(a)
    print result
    # fptr.write(str(result) + '\n')

    # fptr.close()
