#include <string.h>
#include <stdio.h>
void main()
{

   char str[]="abcddcba";
    int flag=0;
   for(int i=0;i<strlen(str);i++)
   {
       if(str[i]!=str[strlen(str)-1-i])
       {
           flag=1;
           break;
       }
   }
   if(flag==0)
   printf("pali");
}