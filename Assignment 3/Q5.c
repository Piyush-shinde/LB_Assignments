//write a program which accept number from user and return difference betwwen summation of its factor and non factors
#include<stdio.h>
int difffact(int iNo)
{
    int iCnt = 0;
    int sum1 = 0;
    int sum2 = 0;
    for(iCnt = 1;iCnt<iNo;iCnt++)
    {
        if(iNo % iCnt==0)
        {
            sum1 = sum1+iCnt;
        }
        else
        {
            sum2 = sum2+iCnt;
        }
        
    }
    return sum1-sum2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number");
    scanf("%d",&iValue);
    iRet = difffact(iValue);
    printf("%d",iRet);
    return 0;
}