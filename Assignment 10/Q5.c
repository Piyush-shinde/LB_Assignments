//Accept N numbers from user and accpt one another number as NO return frequency of NO from it
#include<stdio.h>
#include<stdlib.h>
int Count(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int iCount =0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt])==iNo)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iSize=0,iCnt=0,iRet=0,iValue=0;
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

    iRet=Count(p,iSize,iValue);
    printf("%d\n",iRet);
    free(p);
    return 0;
}