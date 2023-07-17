#include<stdio.h>
int main()
{
        int d,m,y,p;
        printf("enter the date month and year:");
        scanf("%d-%d-%d",&d,&m,&y);
        p=(y>=1900&&y<=2200&&m>=1&&m<=12);
        switch(p)
        {
        case 1:if(d>=1&&d<=29&&m==2)
               {
                       if(y%4==0&&(y%400||y%100!=0))
                         printf("valid");
                         }
               else if(d>=1&&d<=28&&m==2)
                       printf("valid");
                else if(d>=1&&d<=30&&m==4||m==6||m==9||m==11)
                        printf("valid");
                else if(d>=1&&d<=31&&m==1||m==3||m==5||m==7||m==8||m==10||m==12)
                       printf("valid");
                else
                printf("not valid");
                        break;
        case 0: printf("invalid");
                break;
        default:printf("not a valid");
                break;
        }

}
