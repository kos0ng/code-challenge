#!/bin/python

import math
import os
import random
import re
import sys

# Complete the bonAppetit function below.
def bonAppetit(bill, k, b):
	tmp=0
	for i,j in enumerate(bill):
		if(i!=k):
			tmp+=j
	tmp/=2
	if(b>tmp):
		return b-tmp
	else:
		return "Bon Appetit"

if __name__ == '__main__':
    nk = raw_input().rstrip().split()

    n = int(nk[0])

    k = int(nk[1])

    bill = map(int, raw_input().rstrip().split())

    b = int(raw_input().strip())

    print bonAppetit(bill, k, b)
