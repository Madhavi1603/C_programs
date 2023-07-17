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
int i,j;
i=strlen(a);
j=0;
while(b[j]!='\0')
{
a[i]=b[j];
i++;
j++;
}
a[i]='\0';
}


