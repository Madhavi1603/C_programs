#include<stdio.h>
#include<stdlib.h>
int * aread(int *);
void display(int *,int);
int search(int*,int,int);
int main()
{
int *a,n,i;
int key,ans;
a=aread(&n);
display(a,n);
printf("enter key value to search:");
scanf("%d",&key);
ans=search(a,n,key);
printf("searched value =%d\n",ans);
}
int* aread(int *p)
{
int *a,i;
printf("enter number of values:");
scanf("%d",p);
a=(int*)malloc(*p*sizeof(int));
printf("enter values:");
for(i=0;i<*p;i++);
{
scanf("%d",&a[i]);
}
return(a);
}
void display(int *a,int n)
{
int i;
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
int search(int *a,int n,int key)
{
int i;
for(i=0;i<n;i++)
{
if(a[i]==key)
return (a[i]);
}
exit(0);
}

