//Accept number of rows and number of columns from user and display below pattern
/*
        A       B       C       D
        a       b       c       d
        A       B       C       D
        a       b       c       d
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    char ch = 'A';
    char ch1 = 'a';
    for(i=1;i<=iRow;i++)
    {
        for(j=1,ch='A',ch1='a';j<=iCol;j++,ch++,ch1++)
        {
            if(i%2==0)
            {
                printf("%c\t",ch1);
            }
            else
            {
                printf("%c\t",ch);
            }
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