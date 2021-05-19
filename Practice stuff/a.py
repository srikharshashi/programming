l1=[0,1,2,2,3,0,4,2]
val=2
n=len(l1)
for i in range(0,n):
    if l1[i]==val:
        l1.pop(i)
        n=len(l1)
print(*l1)
