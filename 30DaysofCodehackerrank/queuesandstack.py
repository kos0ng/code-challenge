import sys

class Solution:
	def __init__(self):
		self.stack = []
		self.queue = []
	def pushCharacter(self, ch):
		self.stack.append(ch)

	def enqueueCharacter(self, ch):
		self.queue.append(ch)

	def popCharacter(self):
		return self.stack.pop()

	def dequeueCharacter(self):
		queue=self.queue[::-1]
		print queue
		return queue.pop()
	def display(self):
		print self.queue

# read the string s
s=raw_input()
#Create the Solution class object
obj=Solution()   

l=len(s)
# push/enqueue all the characters of string s to stack
for i in range(l):
    obj.pushCharacter(s[i])
    obj.enqueueCharacter(s[i])

isPalindrome=True
'''
pop the top character from stack
dequeue the first character from queue
compare both the characters
''' 
for i in range(l / 2):
	x=obj.dequeueCharacter()
	y=obj.popCharacter()
	print x,y
	if y!=x:
		isPalindrome=False
		break
    
# #finally print whether string s is palindrome or not.
if isPalindrome:
    sys.stdout.write ("The word, "+s+", is a palindrome.")
else:
    sys.stdout.write ("The word, "+s+", is not a palindrome.")    
    
#         