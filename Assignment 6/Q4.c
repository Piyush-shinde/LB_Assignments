//write a program to accept a number and display its table


#include<stdio.h>
void Table(int iNo)
{
    int iCnt = 0;
    for(iCnt =1;iCnt<=10;iCnt++)
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