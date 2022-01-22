#include<stdio.h>
//r-1(c)c-1

int fact(int n)
{
    if(n==1)
    return 1;

    if(n==0)
    return 1;

    return n*fact(n-1);
}
int ncr(int n,int r)
{
    n-=1;
    r-=1;
    int a=fact(n);
    int b=fact(n-r);
    int c=fact(r);

    int ncr=a/(b*c);

    return ncr;
}
void main() {
    // printf("%d \n",ncr(5,3));
    for(int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d",ncr(j,i));
        }
        printf("\n");
    }
 
 } 