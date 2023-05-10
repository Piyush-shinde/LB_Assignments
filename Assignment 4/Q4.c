//Write a program which accept three numbers and print its multiplication

#include<stdio.h>
int Multiply(int No1,int No2,int No3)
{
    int mul=1;
    if(No1!=0)
    {
        mul=mul*No1;
    }
    if(No2!=0)
    {
        mul=mul*No2;
    }
    if(No3!=0)
    {
        mul=mul*No3;
    }
    if(No1==0 && No2==0 && No3==0)
    {
        return 0;
    }
    return mul;
}
int main()
{
    int iValue1=0,iValue2=0,iValue3=0,iRet=0;
    printf("Enter the three numbers\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
    iRet=Multiply(iValue1,iValue2,iValue3);
    printf("%d",iRet);
    return 0;
}