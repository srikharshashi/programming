#include<stdio.h>
void main() {

    double n=1234.56789;
    long  double val=1.0;
    for(int i=1;i<1000;i++)
    {
        val=1.0;
        for(int j=1;j<=i;j++)
        {
            val=val*n;
        }
        printf("%LG \n",val);
        

    }
 
 }

 