//Accept one number and check whether is divisible by 5 or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Check(int iNo)
{
	if((iNo%2)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	 int iValue = 0;
	 BOOL bRet = FALSE;
	 printf("Enter the Number");
	 scanf("%d",&iValue);
	 if(bRet == TRUE)
	 {
	 	printf("Divisible by 5");
	 }
	 else
	 {
	 	printf("Not Divisible by 5");
	 }
	 return 0;
}
