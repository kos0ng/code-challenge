#!/bin/python

import math
import os
import random
import re
import sys



#
# Complete the 'reverse_words_order_and_swap_cases' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING sentence as parameter.
#

def reverse_words_order_and_swap_cases(sentence):
    tmp=sentence.split(" ")
    res=[]
    for i in tmp[::-1]:
    	tmp2=""
    	for j in i:
    		if j.isupper():
    			tmp2+=j.lower()
    		else:
    			tmp2+=j.upper()
    	res.append(tmp2)
    return ' '.join(res)

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    sentence = raw_input()

    result = reverse_words_order_and_swap_cases(sentence)
    print result
    # fptr.write(result + '\n')

    # fptr.close()
