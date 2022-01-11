#include <stdio.h>
void main()
{
    //Pointer Arithematic and Pointer Allocation

    int a=10;
    int *aptr=&a;
    printf("%d \n",aptr);//Sp basically this print the address/pointer of a
    //Everything is fine but like doesn't int take up 4 bytes?
    // So whenever we say address we refer to the address of the first byte of the int
    // So can we add a number to a pointer?
    // Yes!
    // If the aptr has the value of 2000
    // Then Adding 1 to it will make it 2004
    // As we skip 1 intergeral memory space around it
    // 2000 -ist ; 2001 -2nd ; 2003 -3rd; 2004 - 4th
    // If we add two then it will become 2008
    printf("%d \n",(aptr+1));
    printf("%d \n",(aptr+2));
    // This is the way how pointer arithematic works in C
    // pointer arithematic only allows add and subtract
}