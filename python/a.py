a=input()
li=[]
def getsubstr(p,up,li):
    if(up==""):
       if(p!=""):
            li.append(int(p))
       return li
    
    getsubstr(p+up[0:1],up[1::],li)
    getsubstr(p,up[1::],li)
    

li=[]
getsubstr("",a,li)

c=0
for i in li:
    if(i<27):
        print(i,end=" ")
        c+=1
print(c)