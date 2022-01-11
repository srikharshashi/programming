#include<stdio.h>
#include <math.h>
#include<limits.h>

void main() {
   double n=1234.56789;
   printf("%lf",DBL_MAX);
   for(int i=1;i<1000;i++)
   {
       long double num=pow(n,i);
       printf("%lf \n",num);
       double a=num-(int)num;
       //You get the starting two digits here
       int start=a*100;
       //end is lil complex
       double b1=a*100000000;
       //b1=12345678.91 example
       double b2=b1-(int)b1;
       int b3=b2*100;
       
        if(b1==93 && b2==86)
        {
            printf("OK");
        }
       
   }
 
 } 