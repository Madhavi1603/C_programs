#include<stdio.h>
int main()
{
int a=9 , p;               // p=1
printf("enter the bit position");
scanf("%d",&p);           // 1 0 0 1  set bit no 1
a=a|(1<<p);               // 0 0 0 1  ----  0 0 1 0
printf("%d",a);           // 1 0 0 1
                          // 0 0 1 0
}                         // 1 0 1 1  (OR operation )
