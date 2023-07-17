//read n characters from user and if the character is alphabet, then print its case reverse. if it is not a character, print it as it is.

#include<stdio.h>
int main()
{
int i=1,n;
printf("enter n number");
scanf("%d",&n);
while(i<=n)
{
char ch,ch1,ch2;
printf("enter a character\n");
scanf(" %c",&ch);
ch1=ch+32;
ch2=ch-32;
if(ch>='A'&&ch<='Z')
printf("%c\n",ch1);
else if(ch>='a'&&ch<='z')
printf("%c\n",ch2);
else
printf("%c",ch);
i++;
}
return 0;
}
