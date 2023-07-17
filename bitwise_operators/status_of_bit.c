#include<stdio.h>
int main()
{
int a=9, p,bit;   // 1 0 0 1
printf("enter bit position");
scanf("%d",&p);  // p =3
if((a&(1<<p))==0)                                  // 1 0 0 1 
{                                                  // 1 0 0 0
bit =0;                                            // 1 0 0 0
printf("bit =%d",bit);
}
else
{
bit =1;
printf("bit =%d", bit);
}
}
