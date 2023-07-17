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
int i=0;
while(a[i]!='\0')
{
b[i]=a[i];
i++;
}
b[i]='\0';
}
