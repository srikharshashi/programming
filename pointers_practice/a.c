#include<stdio.h>
void main()
{
    //Basic Pointers and Dereferncing
    int a;
    // When ever you declare a variable a memory address is inatialized for the following address 
    // In this case 4bytes are allocated for a in the memory
    a=5;
    // This is declaration
    int *aptr=&a;
    //  "&" is an operator called "adressOf"
    printf("printf(aptr); : ");
    printf("%d \n",aptr);//This basically print the address of a (or the pointer value)
    printf("printf(&aptr) :");
    printf("%d \n",&aptr);//This prints the address of pointer as pointer is also varibale
    printf("printf(*aptr) :");
    printf("%d",*aptr);//This is called de-referncing and whenever you want to access the value of original variable
    // This can help
}