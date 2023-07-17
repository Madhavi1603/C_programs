#include<stdio.h>
struct student
{
char name[20];
int rollno;
int marks;
};
void display(struct student *);
struct student *func(struct student *,struct student *);
int main()
{
struct student *ptr;
struct student stu1={"madhavi",38,90},stu2={"naresh",18,99};
ptr=func(&stu1,&stu2);
display(ptr);
}
struct student *func(struct student *p1,struct student *p2)
{
if(p1->marks > p2->marks)
return p1;
else
return p2;
}
void display(struct student *ptr)
{
printf("name: %s\t",(*ptr).name);
printf("rollno :%d\t",(*ptr).rollno);
printf("marks: %d\t\n",(*ptr).marks);
}
