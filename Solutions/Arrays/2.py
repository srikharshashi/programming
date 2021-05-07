#Find the minimum and maximum element from the array

a=[12,45,6,7,34,33,21,67,44,10,100,98,20,2,3,91]
n=len(a)
max=a[0]
for i in range(0,n-1):
    if(a[i+1]>max):
        max=a[i+1]
min=a[0]
for i in range(0,n-1):
    if(a[i+1]<min):
        min=a[i+1]

print(max)
print(min)