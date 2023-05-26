//Accept number of rows and number of columns from user and display below pattern
/*
        1       2       3       4
        5       6       7       8
        9       10      11      12
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=1,j=1;i<=iRow*iCol;i++,j++)
    {
            printf("%d\t",i);
            if(j%iCol==0)
            {
                printf("\n");
            }

            
    }
    printf("\n");
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter the number of rows  and column\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}