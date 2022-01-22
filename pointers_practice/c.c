#include <stdio.h>
void main()
{
    // Pointer Types
    // Pointer types are strongly typed i,e every pointer has a corresponding type
    // reason :- We use them as refernces too
    // there are also something called Generic Pointer
    void *p;
    int a=10;
    int *aptr=&a;
    p=aptr;
    printf("A pointer : %d  P Value: %d \n",aptr,p);
    // Basically p can take on the pointer value of any type
    char c="f";
    char *cptr=&c;
    p=cptr;
    printf("P taking up charptr value :p value :%d \n",p);
    // Here it also takes up the value of a char pointer
    // But notice an int pointer can't take up the value of char pointer
    // This should't work 
    aptr=cptr;
    printf("%d",aptr);
    // It kind of did but it shows an error run on codeblocks
    // Well dont try weird shit with C I really dont understand why some stuff works

}

// We can have pointer to pointers but like 