#!/bin/python

import math
import os
import random
import re
import sys

# Complete the climbingLeaderboard function below.
def climbingLeaderboard(scores, alice):
	a=[]
	rank=[]
	for i in scores:
		if(i not in a):
			a.append(i)
	for i in alice:
		if(len(a)%2!=0):
			for j in range(len(a)):
				if(j==len(a)-1):
					if(i>=a[j]):
						rank.append(str(a.index(a[j])))
						break
					else:
						rank.append(str(a.index(a[j])+1))
						break
				elif(i>=a[j+1] and i<a[j]):
					rank.append(str(a.index(a[j])+2))
					break
				elif(i>a[0]):
					rank.append('1')
					break
				elif(i<a[len(a)-1]):
					rank.append(str(len(a)+1))
					break
		else:
			for j in range(len(a)):
				if(j!=len(a)-1):
					if(i>=a[j+1] and i<a[j]):
						rank.append(str(a.index(a[j])+2))
						break
				elif(i>=a[0]):
					rank.append('1')
					break
				elif(i<a[len(a)-1]):
					rank.append(str(len(a)+1))
					break
	return "\n".join(rank)

		
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    scores_count = int(raw_input())

    scores = map(int, raw_input().rstrip().split())

    alice_count = int(raw_input())

    alice = map(int, raw_input().rstrip().split())

    result = climbingLeaderboard(scores, alice)
    print result
    # print result
    # fptr.write('\n'.join(map(str, result)))
    # fptr.write('\n')

    # fptr.close()
