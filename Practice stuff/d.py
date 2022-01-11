t=int(input())
while(t!=0):
    original_word=input()
    encrypted_word=input()
    word=input()

    d={}

    #abcd ->{a:"",b:"",c:"",d:""}
    #4b5d

    for i in original_word:
        d[i]=""
    

     #abcd ->{a:"",b:"",c:"",d:""}

    for i in range(0,len(original_word)):
        d[original_word[i]]=encrypted_word[i]

    strin=""


    for i in word:
        if i in d.keys(): 
            strin=strin+d[i]
        else:
            strin=strin+i


    print(strin)
    t=t-1



