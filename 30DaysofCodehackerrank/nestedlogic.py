def fine(a,e):
	result=0
	y=a[2]-e[2]
	m=a[1]-e[1]
	d=a[0]-e[0]
	if(y>0):
		result+=10000
		return result
	elif(m>0 and y>=0):
		result+=500*m
		return result
	elif(d>0 and y>=0 and m>=0):
		result+=15*d
		return result
	return result

a=list(map(int,raw_input().split()))
e=list(map(int,raw_input().split()))
print fine(a,e)