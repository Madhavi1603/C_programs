#include<stdio.h>
void display(int);
int main()
{
void (*fptr)(int );
fptr=display;
(*fptr)(10);
}
void display(int x)
{
printf("x=%d\n",x);
printf("hello\n");
}
