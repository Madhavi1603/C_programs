#include<stdio.h>
#include<string.h>
struct obj    //structure defination
{
int roll;
char name[40],gender __attribute__((aligned(2)));//requested alignment should be positive power of 2--1 2 4 are possible but not 3...
float height;                                             //compiler error
}__attribute__((packed));  //specifies how the compiler should align data items
int main()
{
struct obj student;    //declaring structure
printf("size of struct %d",sizeof(student));
}
