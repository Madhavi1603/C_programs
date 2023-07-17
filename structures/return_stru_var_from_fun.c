#include<stdio.h>
struct student
{
char name[20];
int rollno;
int marks;
};
void display(struct student);
struct student change(struct student);
int main()
{
struct student stu1={"madhavi",38,90};
stu1=change(stu1);
display(stu1);
}
struct student change(struct student stu)
{
stu.marks=stu.marks+5;
stu.rollno=stu.rollno-10;
return stu;
}
void display(struct student stu)
{
printf("name :%s\t",stu.name);
printf("rollno:%d\t",stu.rollno);
printf("marks:%d\t\n",stu.marks);
}
