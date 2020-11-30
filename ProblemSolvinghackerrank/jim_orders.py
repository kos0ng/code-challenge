#!/bin/python

import math
import os
import random
import re
import sys

# Complete the jimOrders function below.
def jimOrders(orders):
	tmp=[]
	res=[]
	for i in orders:
		tmp.append(i[0]+i[1])
	tmp2=tmp[:]
	tmp2.sort()
	for i in tmp2:
		tmp3=tmp.index(i)
		res.append(tmp3+1)
		tmp[tmp3]=-1
	return res
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    orders = []

    for _ in xrange(n):
        orders.append(map(int, raw_input().rstrip().split()))

    result = jimOrders(orders)
    print result
    # fptr.write(' '.join(map(str, result)))
    # fptr.write('\n')

    # fptr.close()
