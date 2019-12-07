import sys

class Node:
    def __init__(self,data):
        self.right=self.left=None
        self.data = data
class Solution:
    def insert(self,root,data):
        if root==None:
            return Node(data)
        else:
            if data<=root.data:
                cur=self.insert(root.left,data)
                root.left=cur
            else:
                cur=self.insert(root.right,data)
                root.right=cur
        return root

    def levelOrder(self,root):
        result=""
        a=[]
        if(root.data != None):
            a.append(root)
        while(a):
            current = a[0]
            result+=str(current.data)+' '
            if current.left != None:
                a.append(current.left)
            if current.right != None:
                a.append(current.right)
            a.pop(0)
        print result

T=int(raw_input())
myTree=Solution()
root=None
for i in range(T):
    data=int(raw_input())
    root=myTree.insert(root,data)
myTree.levelOrder(root)