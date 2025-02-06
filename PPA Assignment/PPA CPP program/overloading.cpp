#include<iostream>
using namespace std;

class Overloading
{
	public:
	//add@2ii
	int add(int a,int b)				//1000
	{
		cout<<"addition of integers\n";
		return a+b;
	}
	//add2@ff
	float add(float a ,float b)			//2000
	{
		cout<<"addition of floats\n";
		return a+b;
	}
	//add@2dd
	double add(double a,double b)			//3000
	{
		cout<<"addition of doubles\n";
		return a+b;
	}
	//add@3iii
	int add(int a,int b,int c)			//4000
	{
	cout<<"addition of 3 integers\n";
	return a+b+c;
	}
//fun@2if
	void fun(int a,float b)
	{}
//fun@2fi
	void fun(float x,int y)
	{}
};
int main()
{
Overloading obj;
int i;
float f;
double d;

i=obj.add(11,21);				//call 1000
cout<<i<<"\n";
i=obj.add(11,21,51);			//call 4000
cout<<i<<"\n";
d=obj.add(10.9,89.5);			//call 3000
cout<<d<<"\n";
f=obj.add(10.9f,89.5f);		//call 2000
cout<<f<<"\n";
return 0;
}


/*
sizeof('A');	//1
sizeof(11);		//4
sizeof(88.90)	//8
sizeof(88.90f);	//4



int i=10;			
printf("%d",i);		//10
printf("%d",sizeof(++i));	//4
printf("%d",i);			//10
*/

