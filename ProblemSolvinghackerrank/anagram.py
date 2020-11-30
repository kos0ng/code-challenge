#!/bin/python

import math
import os
import random
import re
import sys

# Complete the anagram function below.
def anagram(s):
	n=len(s)
	if(n%2==1):
		return -1
	left=list(s[:n/2])
	right=list(s[n/2:])
	for i in range(n/2):
		if(left[i] in right):
			right.remove(left[i])
	return len(right)


if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(raw_input())

    for q_itr in xrange(q):
        s = raw_input()

        result = anagram(s)
        print result
    #     fptr.write(str(result) + '\n')

    # fptr.close()
