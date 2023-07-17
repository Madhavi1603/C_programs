#include<stdio.h>
struct student
{
char name[20];
int rollno;
int marks;
};
void display(struct student *);
void inc_marks(struct student *);
int main()
{
struct student stu1={"madhavi",38,90};
inc_marks(&stu1);
display(&stu1);
}
void inc_marks(struct student *ptr)
{
(ptr->marks)++;
}
void display(struct student *ptr)
{
printf("name :%s\t",ptr->name);
 printf("rollno :%d\t",ptr->rollno);
 printf("marks :%d\t",ptr->marks);
}
