// calculate and print  area and perimeter of a circle

#include<stdio.h>
int main()
{
int r;
float pi,area, permiter;
pi=3.14;
printf("enter radius");
scanf("%d",&r);
area =pi*r*r;
permiter=2*pi*r;
printf("area of circle:%f",area);
printf("permiter of circle:%f",permiter);
return 0;
}
