//Accept N numbers from user and return the difference betwween frequency of even and odd numbers
#include<stdio.h>
#include<stdlib.h>
int CountEvenOdd(int Arr[],int iLength)
{
    int iCnt = 0;
    int ECount =0;
    int OCount =0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt])%2==0)
        {
            ECount++;
        }
        else
        {
            OCount++;
        }
    }
    return ECount-OCount;
}
int main()
{
    int iSize=0,iCnt=0,iRet=0;
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
    iRet=CountEvenOdd(p,iSize);
    printf("%d\n",iRet);
    free(p);
    return 0;
}