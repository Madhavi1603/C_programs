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
int i,j;
i=0;
j=strlen(a)-1;
while(i<j)
{
int temp;
temp=a[i];
a[i]=a[j];
a[j]=temp;
i++;
j--;
}
}





