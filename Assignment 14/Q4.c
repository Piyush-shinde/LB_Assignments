//Accept number from user and display below pattern
// #       1       *       #       2       *       #       3       *       #       4       *
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter the number of Elements\n");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}