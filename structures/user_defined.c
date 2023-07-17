#include<stdio.h>
#include<string.h>
struct student
{
int roll;
char name[40],gender;
float height;
};
int main()
{
struct student s;
printf("enter rollno,name,gender and height\n");
scanf("%d%s %c%f",&s.roll,s.name,&s.gender,&s.height);
printf("rollno=%d\tname=%s\tgender=%c\theight=%.2f",s.roll,s.name,s.gender,s.height);
}

