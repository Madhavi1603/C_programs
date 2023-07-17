#include<stdio.h>
struct student
{
char name[10];
int rollno;
float marks;
};
int main()
{
struct student s;
struct student *ptr;
ptr=&s;
printf("enter name,rollno,marks:");
scanf("%s%d%f",s.name,&s.rollno,&s.marks);
printf("%s %d %.2f\n",s.name,s.rollno,s.marks);
printf("%s %d %.2f\n",ptr->name,ptr->rollno,ptr->marks);
printf("%s %d %f\n",(*ptr).name,(*ptr).rollno,(*ptr).marks);
}
