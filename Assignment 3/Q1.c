//write a program which accept number from user and display its multiplication of factors.
#include<stdio.h>
int MultFact(int iNo)
{
    int iCnt = 0;
    int fMul = 1;
    for(iCnt = 2;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            fMul = fMul*iCnt;
        }
        
    }
    return fMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number");
    scanf("%d",&iValue);
    iRet = MultFact(iValue);
    printf("%d",iRet);
    return 0;
}