#include<stdio.h>
#include<string.h>
#include<ctype.h>
void initial(char*);
int main()
{
char a[20];
printf("enter a string\n");
gets(a);
initial(a);
}
void initial(char*a)
{
int i=0;
while(isspace(a[i]))  //ignoring leading space___if any
{
i++;
}
putchar(a[i]);
putchar('.');
while(a[i]!='\0')   //process untill '\0' is reached
{
if(isspace(a[i]) && !isspace(a[i+1])) //current char must be space and next char must not a space
{
putchar(a[i+1]);
putchar('.');
}
i++;               //moves to next location
}
}
