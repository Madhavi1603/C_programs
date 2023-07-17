#include<stdio.h>
#include<string.h>
struct student
{
char name[20];
int rollno;
int marks;
};
void display(char name[],int rollno,int marks);
int main()
{
struct student stu1={"madhavi",38,89};
struct student stu2;
strcpy(stu2.name,"naresh");
stu2.rollno=18;
stu2.marks=90;
display(stu1.name,stu1.rollno,stu1.marks);
display(stu2.name,stu2.rollno,stu2.marks);
}
void display(char name[],int rollno,int marks)
{
printf("name: %s\t",name);
printf("rollno :%d\t",rollno);
printf("marks: %d\t\n",marks);
}
