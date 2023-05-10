// write a program which accept number N from user and print 5 multiples of N
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    int iNo1=5;
    for(iCnt =1;iCnt<=iNo1;iCnt++)
    {
        printf("%d\t",(iCnt*iNo));
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}