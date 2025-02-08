#include<stdio.h>

int main()
{
int arr[4]={11,21,51,101};

printf("%d\n",sizeof(arr));			//16
printf("%d\n",sizeof(arr[1]));		//4

printf("%d\n",arr[2]);				//51
printf("%d\n",arr);					//100
printf("%d\n",&arr);				//100

printf("%d\n",arr+1);				//104
printf("%d\n",(&arr)+1);			//116

printf("%d\n",arr[2]);
printf("%d\n",*(arr+2));
printf("%d\n",*(2+arr));
printf("%d\n",2[arr]);

return 0;
}