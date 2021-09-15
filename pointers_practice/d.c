// Pointers are function arguments
// Call by Reference
#include <stdio.h>

void exchange(int *a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}


void main()
{
    int a=10;
    int b=20;
    int *aptr=&a;
    int *bptr=&b;
    exchange(aptr,bptr);
    printf("%d %d \n",a,b);
    
}
