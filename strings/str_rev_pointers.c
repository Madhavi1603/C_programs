#include<stdio.h>
#include<string.h>
void my_rev(char*);
int main()
{
char a[20];
printf("enter the string:");
scanf("%s",a);
my_rev(a);
printf("revrers of string is :%s",a);
}
void my_rev(char *a)
{
char  *p1,*p2;
p1=a;
p2=a+strlen(a)-1;
while(*p1<*p2)
{
int temp;
temp=*p1;
*p1=*p2;
*p2=temp;
p1++;
p2--;
}
}





