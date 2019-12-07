import os
import sys

#
# Complete the pageCount function below.
#
def pageCount(n, p):
	if(n%2!=0):
		n=n-1
	if(p%2!=0):
		tmp1=(p-1)/2
		tmp2=(n-(p-1))/2
	else:
		tmp1=p/2
		tmp2=(n-p)/2
	if(tmp1<tmp2):
		print tmp1
	else:
		print tmp2
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    p = int(raw_input())

    result = pageCount(n, p)
    print result
    # fptr.write(str(result) + '\n')

    # fptr.close()
