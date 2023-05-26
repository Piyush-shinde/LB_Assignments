//Accept number from user and display below pattern
// A    B   C   D   E
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch ='A';
    for(iCnt = 1,ch='A';iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);
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