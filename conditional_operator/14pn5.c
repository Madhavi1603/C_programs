#include<stdio.h>
int main()
{
char ch,ch1,ch2;
printf("enter a character");
scanf("%c",&ch);
ch1=ch+32;
ch2=ch-32;
ch<='Z'?ch>='A'?printf("%c",ch1):printf("%c is not an alphabet",ch):ch<='z'?ch>='a'?printf("%c",ch2):printf("%c is not an alphabet",ch):printf("%c is not an alphabet",ch);
}
