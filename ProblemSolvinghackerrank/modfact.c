// Simple method to compute n! % p 
#include <bits/stdc++.h> 
using namespace std; 

// Returns value of n! % p 
int modFact(int n, int p) 
{ 
	if (n >= p) 
		return 0; 

	int result = 1; 
	for (int i = 1; i <= n; i++) 
		result = (result * i) % p; 
		cout << result;
	return result; 
} 

// Driver program 
int main() 
{ 
	int n = 12, p = 3; 
	cout << modFact(n, p); 
	return 0; 
} 
