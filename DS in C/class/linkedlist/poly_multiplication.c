//Polynomial mul
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter the degree of polynomial \n");
    scanf("%d", &n);

    //Dynamically allocate the memory for a given array instead of allocating it in the stack
    int *ptr1 = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter term %d \n", i);
        scanf("%d", &ptr1[i]);
    }

    int *ptr2 = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter term %d \n", i);
        scanf("%d", &ptr2[i]);
    }

    int *ptr3 = (int *)malloc((n+n-1) * sizeof(int));
    for(int i=0;i<(n+n-1)-1;i++)
    ptr3[i]=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ptr3[i+j] += ptr1[i] * ptr2[j];
            
        }
    }
    
    for(int i=0;i<n+n-1;i++)
    {
        printf("%d ",ptr3[i]);
    }
}


