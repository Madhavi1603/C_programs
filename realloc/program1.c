#include<stdio.h>
#include<stdlib.h>
int main()
{
char *ptr;
ptr=malloc(100);
printf("address=%u\n",ptr);
ptr=realloc(ptr,150);
printf("realloc address=%u\n",ptr);
if(ptr!=NULL)
printf("memory created successfully");
return 0;
}
