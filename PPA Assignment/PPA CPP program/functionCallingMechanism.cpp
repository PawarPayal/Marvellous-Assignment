#include<iostream>
using namespace std;
//call by value
void fun(int no)
{
	cout<<"inside call by value:"<<no<<"\n";
}
//call by address
void gun(int*p)
{
	cout<<"inside call by address:"<<*p<<"\n";
	(*p)++;
}
//call  by reference
void sun(int &ref)
{
		cout<<"inside call by reference:"<<ref<<"\n";
}

int main()
{
	int i=10;
	int j=10;
	int k=10;
	fun(i);			//fun(10);		//call goes to line 4
	cout<<i<<"\n";
	gun(&j);//gun(200); it is assume address of j	//call goes to line 9
	cout<<j<<"\n";	
	sun(k);			//sun(k);		//call goes to line 14
	
	return 0;
}