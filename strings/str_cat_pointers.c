#include<string.h>
#include<stdio.h>
void my_strcat(char*,char*);
void main()
{
char a[30],b[20];
printf("enter the string");
scanf("%s%s",a,b);
my_strcat(a,b);
printf("after concatinations is:%s",a);
}
void my_strcat(char*a,char*b)
{
char *p1,*p2;
p1=a+strlen(a);
p2=b;
while(*p2!='\0')
{
*p1=*p2;
p1++;
p2++;
}
*p1='\0';
}


