#include <stdio.h>

void main()
{
    int A[]={2,5,8,6,5};
    int *aptr=A;
    printf(" aptr : %d \n",aptr);
    printf("&a[0] : %d \n",&A[0]);
    printf("A : %d \n",A);
    printf("*A : %d \n",*A);
    printf("*aptr :  %d\n",*aptr);
    printf("A+1 : %d \n",A+1);




}