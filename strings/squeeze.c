#include<stdio.h>
#include<string.h>
int main()
void squeeze(char*,char*);
{
char a[20],b[20];
printf("enter 2 strings\n");
scanf("%s%s",a,b);
squeeze(a,b);
printf("squeezed string is %s\n",a);
}
void squeeze(char*a,char*b)
{
int i=0;
while(b[i]!='\0')                          //delete all elements of arrayb,from array a
{
delete(a,b[i]);
i++;
}
}
void delete(char*a,char ch)
{
int i=0;
while(a[i]!='\0')                          //process array a untill we get'\0'
{
if(a[i]==ch)                               //compare ch with elements of array
strcpy((a+i),(a+i+1));                     // removing a[i],by shifting rest  of the string to the preceding location
else
i++;                                       // if ch is not found at a[i] then move to next location
}
}
