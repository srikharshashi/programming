#Reverse an array

a=[1,2,3,4,65,34,13,57,89]
b=[]
n=len(a)
while(n>0):
  b.append(a[n-1])
  n-=1
print(*b)
 