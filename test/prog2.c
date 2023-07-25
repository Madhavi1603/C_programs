#include<stdio.h>
void main()
{
    static int a[2][3];
    int i=0,j=0;
    for(i=0;i<2;i++)
    for(j=0;i<3;j++)
    printf("%d",a[i][j]);
}


