import sys
class Solution(object):
    def constructRectangle(self, area):
        count=0
        isprime=False
        
        for i in range(1,area+1):
            if(area%i==0):
                count+=1
        if(count==2):
            return [area,1]   
                    
        #findfactors
        factors=[]
        for i in range(1,area+1):
            if(area%i==0):
                factors.append(i)
        #make pairs -condition1     
        pairs=[]        
        for i in factors:
            for j in factors:
                if(i*j==area):
                    pairs.append((i,j))
        #Filter pairs condition-2
        filterpairs=[]    
        for i in pairs:
            if(i[0]>=i[1]):
                filterpairs.append(i)

        #filter pairs condition 3                
        tempo=[]
        for i in range(0,len(filterpairs)):
            x=filterpairs[i][0]-filterpairs[i][1]
            tempo.append(x)


        return(list(filterpairs[tempo.index(min(tempo))]))