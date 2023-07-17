/*#include<stdio.h>
int main()
{
int i,largest,second;
int a[5]={4,2,5,9,1};
if(a[0]>a[1])
{
largest=a[0];
second=a[1];
}
else
{
largest=a[1];
second=a[0];
}
for(i=2;i<5;i++)
{
if(a[i]>largest)
{
second=largest;
largest=a[i];
}
else if(a[i]>second)
{
//largest=largest;
second=a[i];
largest=largest;
}
}
printf("second largest is %d\n",second);
}*/



#include<stdio.h>
int main()
{
int i,largest,second;
int a[5];//={4,2,5,9,1};
printf("enter array elements");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
if(a[0]>a[1])
{
largest=a[0];
second=a[1];
}
else
{
largest=a[1];
second=a[0];
}
for(i=2;i<5;i++)
{
if(a[i]>largest)
{
second=largest;
largest=a[i];
}
else if(a[i]>second)
{
//largest=largest;
second=a[i];
largest=largest;
}
}
printf("second largest is %d\n",second);
}

