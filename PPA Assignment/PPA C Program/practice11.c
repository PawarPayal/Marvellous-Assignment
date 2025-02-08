#include<stdio.h>
int main()
{
	float arr[]={10.3,43.4,45.34,234.45};
	float *p=NULL;
	float *q=NULL;
	
	p=arr;
	q=&(arr[3]);
	printf("%d",p);
	printf("%d",q);
	
	printf("%f",*q);
	printf("%f",*p);
	printf("%f",*(p+2));
	printf("%f",*(p+1));
	printf("%f",p[1]);
	printf("%f",*(2+arr));
	printf("%f",0[arr]);
	printf("%f",q-p);
	printf("%f",*(q-2));

	return 0;
}