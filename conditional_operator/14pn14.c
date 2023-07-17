#include<stdio.h>
int main()
{
char ch;
printf("enter  a character");
scanf("%c",&ch);
if(ch>='A' && ch<='Z')
{
printf("%c is an alphabet",ch);
}
else if(ch>='a' && ch<='z')
{
printf("%c is an alphabet",ch);
}
else
printf("%c is not an alphaber",ch);
return 0;
}

