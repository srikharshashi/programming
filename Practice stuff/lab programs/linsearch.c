//recursive linear search
#include<stdio.h>
int search(int arr[],int n,int target,int i)
{
    if(i==n)
    return -1;
    if(arr[i]==target)
    return i;
    

   return search(arr,n,target,++i);
}
void main() {
 
 int arr[]={10,20,30,30,404,40,5898,5,20};
 int n=sizeof(arr)/sizeof(int);
 int x=23;
 printf("%d",search(arr,n,x,0));
 } 