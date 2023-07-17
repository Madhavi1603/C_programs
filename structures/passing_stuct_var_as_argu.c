#include<stdio.h>
struct student
{
char name[20];
int rollno;
int marks;
};
void display(struct student stu);
int main()
{
struct student stu1={"madhavi",38,90};
struct student stu2={"naresh",18,90};
display(stu1);
display(stu2);
}
void display(struct student stu)
{
printf("name :%s\t",stu.name);
printf("rollno:%d\t",stu.rollno);
printf("marks:%d\t\n",stu.marks);
}
