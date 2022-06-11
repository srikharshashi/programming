#include<stdio.h>
#include<stdlib.h>
int size=1;
void insert(int n,int arr[])
{
    
    int i=size;  
    arr[i]=n;

    int temp=arr[i];
    while(i>1 && temp>arr[i/2])
    {
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=temp;
    size++;
}

void delete(int* arr)
{
    int t=arr[1];
    arr[1]=arr[size-1];
    arr[size-1]=t;

    int i=1;
    int j=2*i;


    while(j<=size-1)
    {
        if(arr[j+1]>arr[j])
            j=j+1;
        
        if(arr[j]>arr[i])
        {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            i=j;
            j=2*j;
        }
        else 
            break;
    }
    
    size--;
}
void print(int* arr)
{
    for(int i=0;i<8;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("the size is =%d",size);
    printf("\n");

}

void main()
{
    int n=8;
    int* arr=(int*)(malloc(sizeof(int)*n));
    arr[0]=0;
    
    insert(50,arr);
    insert(30,arr);
    insert(20,arr);
    insert(15,arr);
    insert(10,arr);
    insert(8,arr);
    insert(16,arr);

    print(arr);
    delete(arr);

    print(arr);
    delete(arr);

    print(arr);
    delete(arr);

    print(arr);
    delete(arr);

    print(arr);
    delete(arr);

    print(arr);
    delete(arr);

    print(arr);
    delete(arr);

    

    

     
    print(arr);

    
}
    