#include<stdio.h>
#include<string.h>
struct student         //structure defination (here there is no memory allocation)
{
int roll;
char name[40],gender;
float height;
}s1;                  //structure declaration (here memory allocation takes place)
int main()
{
struct student s2={36,"shainy",'F',3.5};//declaring &initializing structure variables
printf("rollno\tname\tgender\theight\n");
s1.roll=38;                         //accessing members of a structure using '.'operator
strcpy(s1.name,"madhavi");
s1.gender='F';
s1.height=5.3;
printf("%d\t%s\t %c\t%f\n",s1.roll,s1.name,s1.gender,s1.height);
printf("%d\t%s\t %c\t%f\n",s2.roll,s2.name,s2.gender,s2.height);
}

