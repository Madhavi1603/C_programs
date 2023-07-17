// read a character and  print if the given character is an alphabet or not
#include<stdio.h>
int main()
{
char ch;
printf("enter a character");
scanf("%c",&ch);
if(ch>='a')
{
if(ch<='z')
{
printf("%c is an alphabet",ch);
}
}
else if(ch>='A')
{
if(ch<='Z')
{
printf("%c is an alphabet",ch);
}
}
else
printf("%c is not an alphabet",ch);
return 0;
}
