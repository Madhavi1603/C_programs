//Repeat the eligibility program for n times. Read maths,physics and chemistry marks for n students, and print if each student is eligible for the course or not based on below conditions:
//1)Maths >= 60 
//2)Physics >=50 
//3)Chemistry >= 40
//4)Maths + Physics + Chemistry >= 200 or
//5)Maths + Physics >= 150

#include<stdio.h>
int main()
{
int i=1,n;
printf("enter n number");
scanf("%d",&n);
while(i<=n)
{
int m,p,c,t1,t2;
printf("enter marks of three subjects \n");
scanf("%d%d%d",&m,&p,&c);
if(m>=60 && p>=50 && c>=40)
{
t1=m+p+c;
if(t1>=200)
printf("eligible :%d\n",t1);
else
{
t2=m+p;
if(t2>=150)
printf("eligible :%d\n",t2);
else
printf("not eligible :%d\n",t2);
}
}
else
printf("not eligible\n");
i++;
}
return 0;
}
