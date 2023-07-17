#include<stdio.h>
struct student
{
char name[20];
int rollno;
int submarks[4];
};
int main()
{
int i,j;
struct student stuarr[3];
for(i=0;i<3;i++)
{
printf("enter data for students %d\n",i+1);
printf("enter name:");
scanf("%s",stuarr[i].name);
printf("enter roll number:");
scanf("%d",&stuarr[i].rollno);
for(j=0;j<4;j++)
{
printf("enter marks for subject %d:",j+1);
scanf("%d",&stuarr[i].submarks[j]);
}
}
for(i=0;i<3;i++)
{
printf("data of students %d\n",i+1);
printf("name:%s,rollno:%d\n",stuarr[i].name,stuarr[i].rollno);
for(j=0;j<4;j++)
printf("marks:%d\n",stuarr[i].submarks[j]);
}
}
