#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for (iCnt=0;iCnt<=5;iCnt++);
    {
        printf(" * ");
    }
}
int main()
{
int iValue=0;
printf("enter the number");
scanf("%d",&iValue);
Display(iValue);
return 0;
}