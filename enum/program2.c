#include<stdio.h>
enum directions{east=11,west,north=44,south};// east=11 west=previous num+1(12) north=44 south=45
int main()
{
enum directions m;
m=west;
printf("enum value of family :%d\n",m);
}
