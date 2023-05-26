//Accept number of rows and number of columns from user and display below pattern
/*
        4
        4
        1       2       3       4
        5       6       7       8
        9       1       2       3
        4       5       6       7
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0,counter=1;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(counter==10)
            {
                counter=1;
            }
            printf("%d\t",counter);
            counter++;
        }
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