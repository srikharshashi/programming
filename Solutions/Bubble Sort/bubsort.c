#include <stdio.h>
void main()
{
    int len;
    int i;
    int flag,temp,j;

    printf("Enter length of array \n");
    scanf("%d",&len);
    printf("Enter Array elements \n");
    int arr[len];
    for(i=0;i<len;i++)
    {
    scanf("%d",&arr[i]);
    }
    for (i=0;i<len-1;i++)
    {
        for(j=0;j<len-1-i;j++) //n-1 is the number of comparisions and n-1-i is to skip checking the sorted elements at last
        {
            flag=0;
            if(arr[j+1]<arr[j])
            {
                flag=1;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            
        }
            if(flag==0) //if there were no swaps in previous pass the array is sorted
            break;
    }
    printf("The sorted array is \n");
    for(i=0;i<len;i++)
    {
    printf("%d ",arr[i]);
    }

}