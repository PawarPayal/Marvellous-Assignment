#include<stdio.h>
int main()
{
int arr[5]={10,20,30,40,50};

printf("base address of array:%p\n",arr);
printf("base address of array:%p\n",&arr);
printf("size of array:%d\n",sizeof(arr));

return 0;
}