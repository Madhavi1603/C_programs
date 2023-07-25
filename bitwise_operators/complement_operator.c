#include<stdio.h>                  
int main()                            // a=00001010
{                                     // ----------
int a=10,c;                           // c=11110101 ->(-11)
c=~a;                                // formula
printf("value is=%d",c);            //  ~a=-(a+1)
}
