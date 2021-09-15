#include<stdio.h>
#include<stdlib.h>
void main() {
    // FILE *ptr=fopen("main.txt","r");
    // char c=fgetc(ptr);
    // printf("%c",c);

    // FILE *ptr=fopen("main.txt","r");
    // char str[30];
    // fgets(str,6,ptr);
    // printf("%s",str);

    // FILE *ptr=fopen("main.txt","w"); //open the file in write mode
    // fputc('o',ptr);
    // fputs("oof lmao",ptr);

    FILE *ptr=fopen("main.txt","a"); //open the file in r+ mode
    fputs(" lmaooooooo",ptr);




    fclose(ptr); 

 
 } 