#include<stdio.h>                  
int main()                            //        a=00000101
{                                     // 5<<2-->c=00000001-->1
int a=5,b=2,c;                       
c=a>>b;                               //   formula                        
printf("value is=%d",c);             //    a/2^b 
}                                    //    5/2^2
                                     //   =5/4=1.25 -->1

