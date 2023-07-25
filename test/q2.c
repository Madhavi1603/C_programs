#include<stdio.h>

{
int size=4;
int a[size];
a[0]=11,a[1]=22;
a[2]=33,a[3]=44;
printf("%d%d",*(a+2),a[1]);
}
