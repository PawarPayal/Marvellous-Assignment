#include<stdio.h>
int main()
{
char ch='A';	//consider address of ch as 100
char *p=&ch;	//consider address of p as 200
char **q=&p;	//consider address of q as 300
char **x=&p;	//consider address of x as 400
char *y=&ch;	//consider address of y as 500

printf("%d",&ch);
printf("%d",p);
printf("%d",&p);
printf("%d",q);
printf("%c",**x);
printf("%c",**q);
printf("%d",*q);

return 0;
}