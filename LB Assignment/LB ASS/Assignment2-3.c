#include<stdio.h>
void Display(int iNo)
{
    if(10>iNo)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iValue=0;
    printf("enter the number");
    scanf("%d\n",&iValue);
    Display(iValue);
    return 0;
}