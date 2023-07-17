#include<stdio.h>
int strlen(char *);
int main()
{
char x[10];
printf("enter a string \n");
scanf("%s",x);
printf("string length =%d\n",strlen(x));
}
int strlen(char *a)
{
int i=0;
while(a[i]!='\0')
{
i++;
}
return (i);
}
