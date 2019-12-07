#!/bin/python

import sys

n = int(raw_input().strip())
a = map(int, raw_input().strip().split(' '))
# Write Your Code Here
swapcount=0
while True:
	count=0
	for i in range(0,len(a)-1):
		if(a[i+1]<a[i]):
			b=a[i]
			a[i]=a[i+1]
			a[i+1]=b
			count+=1
	if(count==0):
		break
	swapcount+=count
print 'Array is sorted in '+str(swapcount)+' swaps.'
print 'First Element:', a[0]
print  'Last Element:', a[n-1]

