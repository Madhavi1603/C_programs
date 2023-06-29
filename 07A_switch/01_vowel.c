//C program to check whether a character is vowel or not using switch statement

#include<stdio.h>
int main()
{
char v;
printf("enter the vowel");
scanf("%c",&v);
switch(v)
{
case 'a':
case 'A':printf("vowel:%c",v);
         break;
case 'e':
case 'E':printf("vowel:%c",v);
         break;
case 'i':
case 'I':printf("vowel:%c",v);
         break;
case 'o':
case 'O':printf("vowel:%c",v);
         break;
case 'u':
case 'U':printf("vowel:%c",v);
         break;
default :printf("not a vowel :%c",v);
}
return 0;
}

