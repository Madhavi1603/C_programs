#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
printf("%d\b\b\b   \n",a);
printf("%d\b\b  \r \n",a);
printf("%d\b \r\r  \n",a);
printf("%d\r\r\r   \n",a);
return 0;
}
