//find factorial 

#include<stdio.h>
int Factorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt = 0;
    int mul=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        mul=mul*iCnt;
    }
    return mul;
}
int main()
{
    int iValue = 0,iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    iRet=Factorial(iValue);
    printf("%d",iRet);
    return 0;
}