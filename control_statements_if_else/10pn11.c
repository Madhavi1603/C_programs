//write a program to read 4 numbers and print the biggest of them
#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter 4 numbers");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b)
{
if(a>c)
{
if(a>d)
{
printf("%d is biggest of the given number ",a);
}
}
}
else if(b>c)
{
if(b>d)
{
printf("%d is biggest of the given number ",b);
}
}
else if(c>d)
{
printf("%d is biggest of the given number ",c);
}
else
printf("%d is biggest of the given number ",d);
return 0;
} 
                    
