#include<stdio.h>
int main(int argc,char *argv[])  //argc counts total number of arguments and argv stores all parameters
{
int i;
printf("file name:%s\n",argv[0]);
printf("total number of arguments :%d\n",argc);
printf("arguments passed:");
for(i=1;i<argc;i++)
printf("%s ",argv[i]);
printf("\n");
}
