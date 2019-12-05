#!/bin/python

import math
import os
import random
import re
import sys

# Complete the designerPdfViewer function below.
def designerPdfViewer(h, word):
	alpha='abcdefghijklmnopqrstuvwxyz'
	alpha=[i for i in alpha]
	com=dict(zip(alpha,h))
	word=[i for i in word]
	for i in range(len(word)):
		word[i]=com[word[i]]
	return max(word)*len(word)

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    h = map(int, raw_input().rstrip().split())

    word = raw_input()

    result = designerPdfViewer(h, word)
    print result
    # fptr.write(str(result) + '\n')

    # fptr.close()
