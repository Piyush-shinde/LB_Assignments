//write a program which accept number from user and return the multiplication of all digits
#include<stdio.h>
int MultDigits(int iNo)
{
    int iDigit=0;
    int iMult = 1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit = iNo%10;
        iMult=iMult*iDigit;
        iNo = iNo / 10;
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet=MultDigits(iValue);
    printf("%d\n",iRet);
    return 0;
}