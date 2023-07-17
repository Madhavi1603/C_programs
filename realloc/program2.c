#include<stdio.h>
#include<stdlib.h>
int main()
{
char *ptr;
ptr=(char*)malloc(10);
strcpy(ptr,"linux");
printf("%s address =%u\n",ptr,ptr);
ptr=(char*)realloc(ptr,20);
strcat(ptr,"kernal");
printf("%s address=%u\n",ptr,ptr);
free(ptr);
}
