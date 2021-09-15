def max( n, seats):
    #for the money to be maximum every new passenger must take a new flight which hasnt been chose before
    cost=0
    index=0
    for i in range(n):
        if(index <len(seats)):
            cost+=seats[index]
            seats[index]-=1
            index+=1
        else:
            #once all the flights have been chose by one person start from the start again
            index=0
            cost+=seats[index]
            seats[index]-=1
            index+=1
    return cost

def min(n,seats):
    cost=0
    count=0
    #For them to get minimum money you must consume a single flight completely
    #before filling others
    for i in range(n):
        while(seats[i]!=0):
            cost+=seats[i]
            seats[i]-=1
            count+=1
            if(count==n):
                break
        if(count==n):
            break
    return cost

stri=input()
n=int(stri.split()[0]) #number of people in Line
m=int(stri.split()[1]) #number of planes avialable
seats=list(map(int,input().split()))#get a list of seats
#We get a list of seats aviabale
modseat=seats.copy()
#So if you didnt know python use array pointers to ponit to lists
#to make a sepearte independent copy of lists use copy method else both of them will be linked
#and changes will be shown 

print("Maximum is : ",max(n,seats))
print("Minimum is : ",min(n,modseat))
