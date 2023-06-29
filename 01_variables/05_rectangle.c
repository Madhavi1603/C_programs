// calculate and print area and perimeter of a rectangle

#include<stdio.h>
int main()
{
int l,b,a,p;
printf("enter 2 numbers");
scanf("%d%d",&l,&b);
a =l*b;
p =2*(l+b);
printf("area of rectangle:%d",a);
printf("permiter of rectangle:%d",p);
return 0;
}
