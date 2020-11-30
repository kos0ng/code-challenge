#!/bin/python

import math
import os
import random
import re
import sys

# Complete the stringConstruction function below.
def stringConstruction(s):
	list_char="abcdefghijklmnopqrstuvwxyz"
	cost=0
	for i in list_char:
		if(s.count(i)>0):
			cost+=1
	return cost
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(raw_input())

    for q_itr in xrange(q):
        s = raw_input()

        result = stringConstruction(s)
        print result
    #     fptr.write(str(result) + '\n')

    # fptr.close()
