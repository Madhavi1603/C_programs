/*#include<stdio.h>
int main()
{
switch('X')
{
case 'x':
printf("a");
case 'X':
printf("A");
}
}
o/p=A
*/


//-------------------------------------------------


/*#include<stdio.h>
int main()
{
int n;
printf("enter a character");
scanf("%d",&n);
switch(n)
{
case 1:printf("a");
break;
case 2:printf("b");
break;
default :printf("NILL");
}
}*/


//------------------------------------------------------------------------



/*#include<stdio.h>
int main()
{
char ch;
printf("enter a character");
scanf("%c",&ch);
switch(ch)
{
case 'a':printf("A");
break;
case 'b':printf("B");
break;
default :printf("NILL");
}
}*/


//-----------------------------------------------------------------------------


/*
#include<stdio.h>
int main()
{
switch(2)
{
case 1:printf("1");
break;
case 2:printf("2");
break;
}
}
o/p=2*/

//---------------------------------------------------------------------------------

/*
#include<stdio.h>
int main()
{
int n=2.3;
switch(n);
{
case 1:printf("1");
break;
case 2.3:printf("2");
break;
case 3:printf("2.3");
break;
}
}
o/p=error switch and case label  not be float*/

//-------------------------------------------------------------------------------------


/*
#include<stdio.h>
int main()
{
int a=10,b=20;
switch(a+b)
{
case 10:printf("10");
break;
case 10+20:printf("30");
break;
default:printf("NILL");
}
}

o/p=30

switch consider variable ,variable  expression,constant and constant expression
case label consider 'a',constant value,constant expression*/


//--------------------------------------------------------------------------------

/*
#include<stdio.h>
int main()
{
int i=21;
switch(i%10)
{
case 1:printf("1\n");
break;
case 2:printf("2\n");
break;
default:printf("none\n");
}
}

o/p=1 and o/p=2 (using '/'operator)
*/

//----------------------------------------------------------------------



