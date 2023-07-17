#include<stdio.h>
void my_strcpy(char*,char*);
void main()
{
char a[10],b[10];
printf("enter string a:");
scanf("%s",a);
my_strcpy(b,a);
printf("copied string into b=%s",b);
}
void my_strcpy(char *b,char *a)
{
char *p1,*p2;
p1=a;
p2=b;
while(*p1!='\0')
{
*p2=*p1;
p1++;
p2++;
}
*p2='\0';
}
