n=int(input())
arr=list(map(int,input().split()))
print(arr)
pairs=[]
for i in range(0,n):
    for j in range(n):
            pairs.append((arr[i],arr[j]))
print(len(set(pairs)))

# int(input().split())
# input().split()
# ["1,"2","3","4"] 
# # 1 2 3 4 

