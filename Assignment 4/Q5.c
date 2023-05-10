//write a program which accept total marks & obtained marks from user and calculate percetage

#include<stdio.h>

float Percentage(int No1,int No2)
{
    if(No1 == 0 || No2 == 0)
    {
        return 0;
    }
    else
    {
        return (No2*100)/No1;
    }
}

int main()
{
    int iValue1=0,iValue2=0;
    float fRet = 0.0f;

    printf("Please Enter total marks\n");
    scanf("%d",&iValue1);

    printf("Please Enter obtained marks\n");
    scanf("%d",&iValue2);
    fRet = Percentage(iValue1,iValue2);
    printf("%0.2f %%",fRet);
    return 0;
}