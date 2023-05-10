//write a program to accept a number and display its reverse table


#include<stdio.h>
void Table(int iNo)
{
    int iCnt = 0;
    for(iCnt =10;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt*iNo);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    Table(iValue);
    return 0;
}