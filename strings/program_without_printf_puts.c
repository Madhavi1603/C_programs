#include<stdio.h>
void play(char*a);
int main()
{
char a[10];
puts("enter the string");
gets(a);
play(a);
}
void play (char*a)
{
//puts(a);
int i=0;
while(a[i]!='\0')
{
putchar(a[i]);
i++;
}
}

