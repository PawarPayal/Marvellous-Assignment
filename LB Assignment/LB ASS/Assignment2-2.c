#include<stdio.h>
void Display(int iNo)
{
    while (iNo>5);
    {
        printf(" *\n ");
        iNo--;
    }
}
int main()
{
int iValue=5;
printf("enter the number");
scanf("%d",&iValue);
Display(iValue);
return 0;
}