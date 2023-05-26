//Accept number from user and display below pattern
// 2       4       6       8       10      12      14      16
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",2*iCnt);
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