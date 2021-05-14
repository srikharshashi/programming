#include <stdio.h>
void prarr(int arr[],int len)
{
    int i;
    for(i=0;i<len;i++)
    {
    printf("%d ",arr[i]);
    }
    printf("\n");
}
void main()
{
    int len;
    int i;
    int temp,j;

    printf("Enter length of array \n");
    scanf("%d",&len);
    printf("Enter Array elements \n");
    int arr[len];
    for(i=0;i<len;i++)
    {
    scanf("%d",&arr[i]);
    }
    for (i=0;i<len;i++)
    {
        temp=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j]; //Shifting the question mark
            j--;
            prarr(arr,len);
        }
        arr[j+1]=temp;//setting the value after finding a position in the unsorted array
        prarr(arr,len);
    }

    
}
