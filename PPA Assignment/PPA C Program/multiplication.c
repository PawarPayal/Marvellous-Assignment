#include<stdio.h>
int main()

{
int A=10,B=11;
auto int ret=0;
 ret=multiplication(A,B);
 printf("multiplication is : %d\n",ret);
 return 0;
}

int multiplication(int no1,int no2)

{
int Ans=0;
Ans=no1*no2;
return Ans;
}