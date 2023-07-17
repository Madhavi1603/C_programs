#include<stdio.h>
union my
{
int iresult;
float fresult;
};
int main()
{
int a=10,b=20;
union my result;
result.iresult=b/a;
printf("%d\n",result.iresult);
result.fresult=(float)a/b;
printf("%f\n",result.fresult);
printf("size of aunion:%ld\n",sizeof(result));
}
