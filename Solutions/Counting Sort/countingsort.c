#include <stdio.h>
int findmaxin(int arr[],int len)
{
    int maxin=arr[0];
    for(int i=1;i<len;i++)
    {
            if(arr[i]>arr[maxin])
            maxin=i;
    }
    return maxin;
}
void main()
{
    int len;
    int i;
    int temp,j;
    int range;

    printf("Enter length of array \n");
    scanf("%d",&len);
    printf("Enter Array elements \n");
    int arr[len];
    for(i=0;i<len;i++)
    {
    scanf("%d",&arr[i]);
    }
    range =findmaxin(arr,len);
    int count[range+1];
    for(i=0;i<range+1;i++)
    {
        ++count[arr[i]];
    }
    for(i=0;i<range+1;i++)
    {
    printf("%d",count[i]);
    }
}