//Accept N numbers from user and return product of all odd elements

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
    int iCnt = 0;
    int mul = 1;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt])%2!=0)
        {
            mul = mul*Arr[iCnt];
        }
    }
    return mul;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the size of Array\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements you want to insert\n");
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Product(ptr,iSize);
    printf("%d",iRet);
    free(ptr);
    return 0;
}