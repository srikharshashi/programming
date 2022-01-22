#include<stdio.h> 
#include <stdlib.h>
int n =10;
void main(int);
void main(n)
{
    printf("%d \n", n);
    if (n == 0)
        exit(0);
    main(--n);
}