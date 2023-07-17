//read a character and printf if the given character is digit or not

#include<stdio.h>
int main()
{
char ch;
printf("enter a character");
scanf("%c",&ch);
if(ch>=48)
{
if(ch<=57)
{
printf("%c is a digit",ch);
}
}
else
printf("%c is not a digit",ch);
return 0;
}
