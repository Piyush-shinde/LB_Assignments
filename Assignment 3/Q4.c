//write a program which accept number from user and return summation of all its non factor

#include<stdio.h>
int SumNonFact(int iNo)
{
    int iCnt=0;
    int sum=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            sum=sum+iCnt;
        }
    }
    return sum;
}
int main()
{
    int iValue = 0;
    int iRet= 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);
    iRet = SumNonFact(iValue);
    printf("%d",iRet);
    return 0;
}