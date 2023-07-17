#include<stdio.h>
#include<string.h>
struct stu_marks
{
int mat,phy,che,tot;
float avg;
};
struct student
{
int roll;
char name[40],gender;
float height;
struct stu_marks m;
};
int main()
{
struct student s1={38,"madhavi",'F',5.4,{90,90,90}};
struct student s2;
s2.roll=18;
strcpy(s2.name,"naresh");
s2.gender='m';
s2.height=5.4;
s2.m.mat=50;
s2.m.phy=60;
s2.m.che=78;

s1.m.tot=s1.m.mat+s1.m.phy+s1.m.che;
s1.m.avg=(float)s1.m.tot/3;

s2.m.tot=s2.m.mat+s2.m.phy+s2.m.che;
s2.m.avg=(float)s2.m.tot/3;

printf("rollno\tname\tgender\theight\t\tmat\tphy\tche\ttotal\tavg\n");
printf("%d\t%s\t %c\t%f\t%d\t%d\t%d\t%d\t%f\n",s1.roll,s1.name,s1.gender,s1.height,s1.m.mat,s1.m.phy,s1.m.che,s1.m.tot,s1.m.avg);
printf("%d\t%s\t %c\t%f\t%d\t%d\t%d\t%d\t%f\n",s2.roll,s2.name,s2.gender,s2.height,s2.m.mat,s2.m.phy,s2.m.che,s2.m.tot,s2.m.avg);
}
