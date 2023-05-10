//write a program which accept number from user and display all its non factor

#include<stdio.h>
void NonFact(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);
    NonFact(iValue);
    return 0;
}