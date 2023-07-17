#include<stdio.h>
#include<string.h>
char* val(char*a,char*b)
{
int i,j;
i=0;
j=strlen(a)-1;
while(a[i]!='\0')
{
b[j]=a[i];
i++;
j--;
}
b[i]='\0';
return b;
}
int main()
{
char a[20],b[10];
printf("enter the string");
scanf("%s",a);
printf("%s",val(a,b));
}
