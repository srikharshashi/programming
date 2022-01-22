#include <stdio.h>
int sumof(int A[]) //here compiler interprest it as sumof (int *a) even if you write int(a [])
{

    printf("1) Size of a[0] : %d Size of A :%d \n ",sizeof(A[0]),sizeof(A)); //Here we get only one element 
    int sum=0;
    int len=sizeof(A[0])/sizeof(A);
    printf("1)  length : %d \n",len);
    for (int i=0;i<len;i++)
    {
        sum=sum+A[i];
    }
    return sum;
}
void Double (int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
    arr[i]=2*arr[i];
    }
}

int main()
{
    
    int A[]={1,2,3,4,5};
    int len=sizeof(A[0])/sizeof(A);
    printf(" main) Size of a[0] : %d Size of A :%d \n ",sizeof(A[0]),sizeof(A));
    printf("Sum of ELements 1 :%d \n",(sumof(A)));
    printf("Doubled elements \n");
    Double(A,len);
    for (int i=0;i<len;i++)
    {
    printf("%d",A[i]);
    printf("ABC");
    }
    return 0;

}


//REMEMBER ::- YOU CAN ONLY PASS ARRAYS BY REFERENCE IN C
//You can change the array in the other fucntion if you pass by refrence