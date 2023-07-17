//read n characters from user, and print if every character is alphabet / numeric / special character.

#include<stdio.h>
int main()
{
int i=1,n;
printf("enter n number");
scanf("%d",&n);
while(i<=n)
{
char ch;
scanf(" %c",&ch);
if(ch>='A'&&ch<='Z')
printf("%c is an alphabet\n",ch);
else if(ch>='a'&&ch<='z')
printf("%c is an alphabet\n",ch);
else if(ch>=48&&ch<=57)
printf("%c is anumerical\n",ch);
else if(ch>=0&&ch<=47)
printf("%c is a special character\n",ch);
else if(ch>=58&&ch<=64)
printf("%c is a special character\n",ch);
else if(ch>=91&&ch<=96)
printf("%c is a special character\n",ch);
else if(ch>=123&&ch<=127)
printf("%c is a special character\n",ch);
else
printf("invalid number");
i++;
}
return 0;
}
