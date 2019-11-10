    #!/bin/python

import math
import os
import random
import re
import sys

# Complete the formingMagicSquare function below.
def formingMagicSquare(s):
	tmp_value=[]
	tmp_value2=[]
	double=[]
	for i in s:
		x=0
		for j in i:
			x+=j
			tmp_value2.append(j)
		tmp_value.append(x)
	for i in tmp_value2:
		if(tmp_value2.count(i)>1):
			if(i not in double):
				double.append(i)
	for i in range(len(tmp_value)):
		if(tmp_value.count(tmp_value[i])<((len(s)/2)+1)):






if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = []

    for _ in xrange(3):
        s.append(map(int, raw_input().rstrip().split()))

    result = formingMagicSquare(s)
    print result

    # fptr.write(str(result) + '\n')

    # fptr.close()
