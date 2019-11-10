   #!/bin/python
import math
import os
import random
import re
import sys

# Complete the formingMagicSquare function below.
def formingMagicSquare(s):
	a=[]
	notinlist=[]
	double={}
	weird={}
	for i in s:
		for j in i:
			a.append(j)
	b=a
	for k in range(1,10):
		if(a.count(k)>1):
			for j,i in enumerate(a):
				if(k==i):
					double[str(j)]=str(i)
		if(a.count(k)==0):
			notinlist.append(k)
	print double
	print notinlist
	d=0
	while(d<5):
		total=0
		for i in notinlist:
			z=int(random.choice(double.keys()))
			x=b[z]
			b[z]=i
			tmp=int(x)-int(b[z])
			if(tmp<0):
				tmp=tmp*-1
			total+=tmp
		print b
		if(int(b[0])+int(b[1])+int(b[2])==int(b[3])+int(b[4])+int(b[5])):
			if(int(b[0])+int(b[4])+int(b[8])==int(b[2])+int(b[4])+int(b[6])):
				print total
				break	
		b=a
		d+=1

		
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = []

    for _ in xrange(3):
        s.append(map(int, raw_input().rstrip().split()))

    result = formingMagicSquare(s)

    # fptr.write(str(result) + '\n')

    # fptr.close()
