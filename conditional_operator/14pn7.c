#include<stdio.h>
int main()
{
char  ch;
printf("enter a character");
scanf("%c",&ch);
ch>='a'?ch<='z'?printf("%c is an alphabet",ch):printf("%c is not  an alphabet",ch):ch>='A'?ch<='Z'?printf("%c is an alphabet",ch):printf("%c is not  an alphabet",ch):printf("%c is not an alphabet",ch);
return 0;
}
