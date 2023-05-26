//Accept divison from student from user and depends on the division display exam timing .there are 4 division in school as A,B,C,D.
// Exam of division A is at 7 Am, B is at 8.20 AM, C at 9.20, D at 10.30 AM.
#include<stdio.h>

void DisplaySchedule(char ch)
{
    if((ch=='a')||(ch=='A'))
    {
        printf("Your Exam at 7 AM");
    }
    else if((ch=='B')||(ch=='b'))
    {
        printf("Your Exam at 8.20 AM");
    }
    else if((ch=='c')||(ch=='C'))
    {
        printf("Your Exam at 9.20 AM");
    }
    else
    {
        printf("Your Exam at 10.30 AM");
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter the Division\n");
    scanf("%c",&cValue);
    DisplaySchedule(cValue);

    return 0;
}