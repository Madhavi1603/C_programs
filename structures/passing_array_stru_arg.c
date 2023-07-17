#include<stdio.h>
struct student
{
char name[20];
int rollno;
int marks;
};
void display(struct student);
void dec_marks(struct student arr[]);
int main()
{
int i;
struct student arr[3]={{"madhavi",38,99},{"shainy",36,80},{"vasavi",39,89}};

dec_marks(arr);
for(i=0;i<3;i++)
display(arr[i]);
}
void dec_marks(struct student arr[])
{
int i;
for(i=0;i<3;i++)
arr[i].marks=arr[i].marks-10;
}
void display(struct student stu)
{
printf("name: %s\t",stu.name);
printf("rollno :%d\t",stu.rollno);
printf("marks: %d\t\n",stu.marks);
}
