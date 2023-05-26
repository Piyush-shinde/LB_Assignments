//Accept Character from user and check whether it is capital or not (A-Z)
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch>='a') && (ch<='z'))
    {
        return TRUE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter the Character\n");
    scanf("%c",&cValue);
    bRet = ChkSmall(cValue);
    if(bRet == TRUE)
    {
        printf("It is small case character");
    }    
    else
    {
        printf("It is not a small case character");
    }
    return 0;
}