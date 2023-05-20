//Accept N numbers from user and check whether that number contain 11 in it or not
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt])==11)
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
    int iSize=0,iCnt=0;
    BOOL bRet=FALSE;
    int *p = NULL;
    
    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

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
    bRet=Check(p,iSize);
    if(bRet==TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }
    free(p);
    return 0;
}