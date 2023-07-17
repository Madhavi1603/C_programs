#include<stdio.h>
int main()
{
int a=9 ,p;               //1 0 0 1
printf("enter the bit position");
scanf("%d",&p);
a&=~(1<<p);               //p=3   0 0 0 1 ----- 1 0 0 0 ---- 0 1 1 1
printf("%d",a);           // 1 0 0 1
}                         // 0 1 1 1
                          // 0 0 0 1
