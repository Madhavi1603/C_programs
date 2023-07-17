#include<stdio.h>
struct data
{
unsigned int  day:5;
unsigned int mon:4;
unsigned int year;
};
int main()
{
struct data d={16,3,1980};
printf("size of structure =%ld\n",sizeof(d));
printf("%d:%d:%d\n",d.day,d.mon,d.year);
}

