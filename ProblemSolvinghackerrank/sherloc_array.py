#!/bin/python

import math
import os
import random
import re
import sys

# Complete the balancedSums function below.
def balancedSums(arr):
	left_count=0
	right_count=len(arr)-1
	sum_left=arr[left_count]
	sum_right=arr[right_count]
	while(left_count!=right_count):
		if(sum_left>sum_right):
			right_count-=1
			sum_right+=arr[right_count]
		else:
			left_count+=1
			sum_left+=arr[left_count]
	if(sum_left==sum_right):
		return "YES"
	return "NO"

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    T = int(raw_input().strip())

    for T_itr in xrange(T):
        n = int(raw_input().strip())

        arr = map(int, raw_input().rstrip().split())

        result = balancedSums(arr)
        print result
    #     fptr.write(result + '\n')

    # fptr.close()
