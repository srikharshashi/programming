//Accept a given number of elements and find the max and min of elelemnts
#include <stdio.h>


void max()
{
    printf("Enter number of elements to be compared ");
    int n;
    scanf("%d", &n);
    printf("\nEnter the 1st number : ");
    int max;
    scanf("%d", &max);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d : ", (i + 1));
        scanf("%d", &n);
        if (n > max)
        {
            max = n;
        }
    }
    printf(" \n Max :%d", max);
}


void min()
{
    printf("Enter number of elements to be compared ");
    int n;
    scanf("%d", &n);
    printf("\nEnter the 1st number : ");
    int min;
    scanf("%d", &min);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d : ", (i + 1));
        scanf("%d", &n);
        if (n < min)
        {
            min = n;
        }
    }
    printf(" \n Min :%d", min);

}


void main()
{

    min();
    // max();
}
