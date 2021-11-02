//sin x series in c
#include <stdio.h>
#include <math.h>
int fact(int n)
{
    int fact =1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
void main()
{
    printf("Enter x ");
    float x;
    scanf("%f",&x);
    printf("Enter limit ");
    int lim;
    scanf("%d",&lim);
    x=x*(3.1415/180.0);
    printf("x : %f \n",x);
    printf("%d ",fact(5));
    float value=0;
    for(int i=0;i<lim;i++)
    {
        int k=(2*i)+1;
        if(i%2!=0)
        value=value+(pow(x,k)/(float)fact(k));
        else
        value=value-(pow(x,k)/(float)fact(k));
    }
    printf("%d",value);
}
