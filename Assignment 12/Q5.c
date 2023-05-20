//Accept N number from user and display summation of digits of each number

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLenght)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLenght;iCnt++)
    {
        int num=0;
        int iDigit = 0;
        int isum=0;
        num=Arr[iCnt];
        while(num!=0)
        {
            iDigit=num%10;
            isum=isum+iDigit;
            num=num/10;
        }
        printf("%d\n",isum);
        
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet=0;

    printf("Enter the size of Array\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements you want to insert\n");
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements are \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    Digits(ptr,iSize);


    free(ptr);
    return 0;
}