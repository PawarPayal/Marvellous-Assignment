#include<stdio.h>
auto int no=10;
void gun()
{
register float fvalue=20.3;
printf("value of f id %f",fvalue);
}
int main()
{
printf("inside main");
gun();
return 0;
}