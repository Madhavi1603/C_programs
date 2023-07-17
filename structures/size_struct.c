#include<stdio.h>
#include<string.h>
struct obj
{
int roll;
char name[40],gen1,gen2,gen3,gen4,gen5;
float height;
};
int main()
{
struct obj student;
printf("size of struct %d",sizeof(student));
}
