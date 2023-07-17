#include<stdio.h>
#include<string.h>
char* mystrrev(char*);
int main()
{
char a[10];
printf("enter any string\n");
gets(a);
mystrrev(a);
printf("reverse of the string:%s\n",a);
}
char* mystrrev(char*a)
{
static char b[10];
int i,j;
i=0;
j=strlen(a)-1;
while(a[i]!='\0')
{
b[j]=a[i];
i++;
j++;
}
b[i]='\0';
return b;
}

