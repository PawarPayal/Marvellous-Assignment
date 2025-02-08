#include<stdio.h>
int main()
{
	int arr[]={10,20,30,40,50};	//consider base address as 100
	int *p=arr;					//consider address of p is 200
	printf("%d",arr);
	printf("%d",&arr);
	printf("%d",p);
	printf("%d",*p);
	printf("%d",sizeof(arr));
	printf("%d",sizeof (arr[0]));
	printf("%d",sizeof (p));
	printf("%d",sizeof(*p));
	
	return 0;
}