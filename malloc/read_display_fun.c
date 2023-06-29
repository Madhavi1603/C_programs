#include<stdio.h>
#include<stdlib.h>
void display(int*,int);
int* aread(int*);
int main()
{
int *a,n;
a=aread(&n);
display(a,n);
free(a);
}
int* aread(int* p)
{
int *a,i;
printf("enter number of values:");
scanf("%d",p);
a=(int *)malloc(*p*sizeof(int));
printf("enter values:");
for(i=0;i<*p;i++)
{
scanf("%d",&a[i]);
}
return(a);
}
void display(int*a,int n)
{
int i;
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
