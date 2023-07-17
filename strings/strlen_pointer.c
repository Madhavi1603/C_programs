#include<stdio.h>
int my_strlen(char *);
int main()
{
char x[10];
printf("enter a string:");
scanf("%s",x);
printf("length of string =%d",my_strlen(x));
}
int my_strlen(char *a)
{
char *p;
p=a;
while(*p!='\0')
{
p++;
}
return(p-a);
}

