import math

def isPrime(n):
	count=0
	if(n==1):
		return 'Not prime'
	for i in range(1,int(math.sqrt(n)+1)):
		if(n%i==0):
			count+=1
		if(count>1):
			return 'Not prime'
	return 'Prime'
T=int(raw_input())
for i in range(T):
	n=int(raw_input())
	print isPrime(n)
