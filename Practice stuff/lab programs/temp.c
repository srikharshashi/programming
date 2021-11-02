#include<stdio.h>
struct code
{
    int i;
    char c;
    struct code *p;
};
void main() {

    struct code var1;
    var1.i=65;
    var1.c='A';
    var1.p=NULL;

    struct code var2;
    var2.i=66;
    var2.c='B';
    var2.p=NULL;

    var1.p=&var2;


    printf("%d --> %c ",var1.p->i ,var1.p->c);

 
 } 