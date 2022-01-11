#include <stdio.h>

void doub(int* A,int size)
{
    for(int i=0;i<size;i++)
    {
        A[i]=2*A[i];
    }
}
void main()
{   
    int A[]={1,2,3,4,5};
    int size=sizeof(A)/sizeof(A[0]);
    doub(A,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",A[i]);
    }
}
//Basically we passed an array by refernce here ,modified it in the other method
