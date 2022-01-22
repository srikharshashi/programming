#include <stdio.h>
#include <conio.h>
void main()
{
    fopen("new_file.txt","r");
    //r --> Read mode  --> Returns the first pointer of the file,if it doesn't exist NULL
    //w --> Write Mode  --> Overwrites the file ,serches for the files,if it doesn't exsist creates
    //a --> Edit/Append --> 3 states
                    //  --> Returns last character pointer it finds the file
                    //  --> Creates the file if it doesn't find the file
                    //  --> NULL if it doesn't find the file
    //r+ --> Read and Write Access
    //a+ -->Preserver contents of File 
}