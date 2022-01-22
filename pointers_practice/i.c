#include <stdio.h>
#include<stdlib.h>
void main()
{
    //Dynamic Memory Allocation in C
    //3 functions to use Heap Memory
    // malloc,calloc,realloc
    //They return void pointer which has to be converted to int pointer

    int n;
    scanf("%d",&n);
    //Advantage of this is you can dynamically make arrays in C
    // Unlike Java C doesn't dynamically do it
    int *A=(int*)malloc(n*sizeof(int));

    //You allocate a paticular memory adress n times the size of int which you can store data
    // something like this

    for(int i=0;i<n;i++)
    {
    A[i]=i+1;
    }
    for(int i=0;i<n;i++)
    {
    printf("%d ",A[i]);
    }
    printf("\n");

    //In this case we had to initialize the value if the same was done using calloc it would have initialized the values by itself
    //calloc(n<number of locations>,<size>)

    //free(<address,(pointer)>)
    //Once you free the memory you can /cannot always access the memory

    free(A);
    A[6]=10;
    for(int i=0;i<n;i++)
    {
    printf("%d ",A[i]);
    }
    
    //For god sake dont do crap like this in C
    //This is just undefined behaviour apparently
    //Free doesn't literally free the memory but it marks it as accessible but it does not promise to override the data
    

}
