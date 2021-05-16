#include <stdio.h>
int findmin(int i,int arr[],int len)
{
    int minin=i;
    for(int j=i+1;j<len;j++)
    {
        if(arr[j]<arr[minin])
        minin=j;
    }
    return minin;

}
void main()
{
    int len;
    int i;
    printf("Enter length of array \n");
    scanf("%d",&len);
    printf("Enter Array elements \n");
    int arr[len];
    for(i=0;i<len;i++)
    {
    scanf("%d",&arr[i]);
    }
    int minin,temp;
    for(i=0;i<len-1;i++)
    {
        minin=findmin(i,arr,len);
        temp=arr[i];
        arr[i]=arr[minin];
        arr[minin]=temp;
    }
    printf("Sorted Array \n");
    for(i=0;i<len;i++)
    {
    printf("%d ",arr[i]);
    }
}