#include<stdio.h>
int str_cmp(char*,char*);
int main()
{
int c;
char a[30],b[20];
printf("enter the 2 strings");
scanf("%s%s",a,b);
c=str_cmp(a,b);
printf("%d",c);
if(c>0)
{
printf("string 1 is greater");

}
else if(c<0)
{
printf("str2 is great");
}
else
{
printf("both the strings are equal");
}
}
int str_cmp(char*a,char*b)
{
char *p1,*p2;
p1=a;
p2=b;
while(*p1==*p2)
{
if(*p1!='\0')
break;
p1++;
p2++;
}
return *p1-*p2;
}


