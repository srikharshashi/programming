#include <stdio.h>
struct student
{
    char name[100];
    int rollno;
    char gender;
    int age;


}shashi;
void main()
{
    struct student nanda;
    strcpy(nanda.name,"Nanda");
    nanda.age=19;
    nanda.gender='M';
    nanda.rollno=12;

    struct student varun={"Varun",009,'M',19};

    


}