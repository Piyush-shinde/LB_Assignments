//Accept N numbers from user and accept one another number as No return index of last occurance
#include<stdio.h>
#include<stdlib.h>
#define ERR_NOTFOUND -1

int SearchLastOccurance(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int iPos = ERR_NOTFOUND;
    for(iCnt = iLength-1;iCnt>=0;iCnt--)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter the size of Array\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements you want to insert\n");
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element that you want to search : \n");
    scanf("%d",&iValue);

    printf("Elements are \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = SearchLastOccurance(ptr,iSize,iValue);
    if(iRet==ERR_NOTFOUND)
    {
        printf("Their is no such element");
    }
    else
    {
    printf("%d is found on index %d\n",iValue,iRet);
    }

    free(ptr);
    return 0;
}