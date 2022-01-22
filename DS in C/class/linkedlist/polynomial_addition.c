#include <stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("Enter the degree of polynomial \n");
    scanf("%d", &n);
    //Dynamically allocate the memory for a given array instead of allocating it in the stack 
    int *ptr1 = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter term %d \n",i);
        scanf("%d", &ptr1[i]);
    }


    int *ptr2 = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter term %d \n",i);
        scanf("%d", &ptr2[i]);
    }

    
    int c=n-1;
    for(int i=0;i<n;i++)
    {
        if(c!=0)
        {
        printf(" %dx^%d +  ",ptr1[i]+ptr2[i],c);
        c--;
        }
        else{
        printf(" %d ",ptr1[i]+ptr2[i]);

        }
    }


}