#include<iostream>
using namespace std;

class  Base
{
	public:			//access specifier
		int A,B;
		void fun()	//function definition			//1000
		{
			cout<<"Base fun\n";
		}
		void gun(int i)		//function definition	//2000
		{
			cout<<"Base  gun  with one integer\n";
		}
		void gun(int i,int j)	//overloaded function definition	//3000
		{
			cout<<"Base gun with 2 integer\n";
		}
};
class Derived:public Base
{
	public:
		int X,Y;
		void sun()		//function definition	//4000
		{
			cout<<"Derived sun\n";
		}
		void fun() 	//function redefinition	//5000
		{
			cout<<"Derived fun\n";
		}
};
int main()
{
	Derived dobj;
	dobj.fun();			//call 5000
	dobj.gun(11);		//call 2000
	dobj.gun(11,21);	//call 3000
	dobj.sun();		   //call 4000
	return 0;
}