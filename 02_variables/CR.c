#include<stdio.h>
int main()
{
int a;
printf("enter 4 digit number");
scanf("%d",&a);
printf("%d\b\b\b   \n",a);
printf("%d\b\b  \r \n",a);
printf("%d\b  \r  \n",a);
printf("%d \r   \n",a);
return 0;
}
