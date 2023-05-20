//Accept N numbers from user and accept Range display all elements from that range

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt = 0;
    for(iCnt = iLength-1;iCnt>=0;iCnt--)
    {
        if(Arr[iCnt]<iEnd && Arr[iCnt]>iStart)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the size of Array\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements you want to insert\n");
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the Starting point : \n");
    scanf("%d",&iValue1);
    printf("Enter the Ending point : \n");
    scanf("%d",&iValue2);

    Range(ptr,iSize,iValue1,iValue2);


    free(ptr);
    return 0;
}