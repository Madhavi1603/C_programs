#include<stdio.h>
#include<string.h>
struct student //structure defination
{
int roll;
char name[40],gender;
float height;
};
int main()
{
struct student s={38,"madhavi",'F',5.3};
printf("rollno\tname\tgender\theight\n");
printf("%d\t%s\t %c\t%f\t",s.roll,s.name,s.gender,s.height);
}

