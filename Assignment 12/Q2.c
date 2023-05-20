//Accept N number from user and return the smallest number
#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLenght)
{
    int iCnt=0;
    int iMin = Arr[0];
    for(iCnt=0;iCnt<iLenght;iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
           iMin=Arr[iCnt];
        }
    }
    return iMin;
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

    iRet=Minimum(ptr,iSize);
    printf("smallest element is : %d\n",iRet);

    free(ptr);
    return 0;
}