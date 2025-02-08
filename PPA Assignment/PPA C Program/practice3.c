#include<stdio.h>
int main()
{
extern int i;
extern int j;
extern int x;
extern int y=151;
void gun();

int main()
{
printf("inside main");
fun();
gun();
return 0;
}
int i=21;
void gun()
{
printf("inside gun");
}
#include<stdio.h>
static int j=21;
int y=101;
void fun()
{
int x=51;
printf("inside fun");
}
}