#!/bin/python

import math
import os
import random
import re
import sys

def maxAnd(n,k):
	result=0
	for i in range(1,n):
		for j in range(i+1,n+1):
			x=i&j
			if(x>result and x<k):
				result=x
	return result

if __name__ == '__main__':
    t = int(raw_input())

    for t_itr in xrange(t):
        nk = raw_input().split()

        n = int(nk[0])

        k = int(nk[1])
        print maxAnd(n,k)