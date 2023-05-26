//Accept number of rows and number of columns from user and display below pattern
/*
        A       A       A       A       A
        B       B       B       B       B
        C       C       C       C       C
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    char ch = 'A';
    for(i=1,ch='A';i<=iRow;i++,ch++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%c\t",ch);
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