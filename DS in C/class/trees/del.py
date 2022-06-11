

class Node:
    def __init__(self,val):
        self.val=val
        self.left=None
        self.right=None

def inorder(root):
    if(root==None):
        return 
    inorder(root.left)
    print(root.val,end=" ")
    inorder(root.right)    
    
def getnode(root,value):
    if(root==None):
        return None
    elif(root.val==value):
        return root
    elif(value>root.val):
        return getnode(root.right,value)
    else:
        return getnode(root.left,value)
    
def delete(data,root):
    node=getnode(root,data)   
    if(node.left==None and node.right==None):
        node=None



p4=Node(4)
p2=Node(2)
p1=Node(1)
p7=Node(7)
p3=Node(3)

p4.left=p2
p4.right=p7

p2.left=p1
p2.right=p3

# print(getnode(p4,7).val)
inorder(p4)
delete(1,p4)
print()
inorder(p4)