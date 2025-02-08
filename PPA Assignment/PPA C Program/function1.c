#include<stdio.h>

int multiplication(int No1,int No2)
{
	int Ans=0;
	Ans=No1*No2;
	return Ans;
}

int main()

{
	int A=10,B=11;
	int ret=0;
	
printf("Inside main function\n");

ret=multiplication(A,B);
printf("multiplication is :%d\n,ret");

return 0;
}