//write a program which accept number from user and and check whether it contain 0 in it or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL chkZero(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit==0)
        {
            break;
        }
        iNo=iNo/10;
    }
    if(iNo==0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet = chkZero(iValue);
    if(bRet == TRUE)
    {
        printf("It contain zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
}