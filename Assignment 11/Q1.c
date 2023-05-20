//Accept N numbers from user and accpt one another number as NO check no is present or not
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int iCount =0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt])==iNo)
        {
            break;
        }
    }
    if(iCnt==iLength)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}
int main()
{
    int iSize=0,iCnt=0,iRet=0,iValue=0;
    BOOL bRet=0;
    int *p = NULL;
    
    printf("Enter the number of elements\n");
    scanf("%d",&iSize);
    printf("Enter the Number you want to search\n");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    printf("Enter %d Elements\n",iSize);
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter Element:%d ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet=Check(p,iSize,iValue);
    if(bRet==TRUE)
    {
        printf("Number is PREsent");

    }
    else
    {
        printf("Numver is not present");
    }
    free(p);
    return 0;
}