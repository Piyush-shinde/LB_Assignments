//Accept number of rows and number of columns from user and display below pattern
/*
        4
        4
        1       2       3       4

        1       @       @       4

        1       @       @       4

        1       2       3       4
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if((i==1)||(j==1)||(j==iCol)||(i==iRow))
            {
                printf("%d\t",j);
            }
            else
            {
                printf("@\t");
            }
        }
        printf("\n");
        printf("\n");
    }
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