
def modFact(n, p): 
    if n >= p: 
        return 0    
  
    result = 1
    for i in range(1, n + 1): 
        result = (result * i) % p  
        print(str(result)+'\n')
    return result 
  
# Driver Code 
n = 3; p = 5
print (modFact(n, p)) 
  