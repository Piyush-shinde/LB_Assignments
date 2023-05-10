//Write a program accept name from user and print that name
#include<stdio.h>
int main()
{
    char Name[30];
    printf("Please Enter Full Name\n");
    scanf("%[^\n]s",Name);
    printf("Your Name is %s",Name);
    return 0;
}