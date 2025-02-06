#include<iostream>
using namespace std;

class Base 
{
	public:
		int A,B;                
		
		Base()
		{
			cout<<"inside Base constructor\n";
		}
		~Base()
		{
			cout<<"inside Base destructor\n";
		}
		void fun()
		{
			cout<<"inside Base fun \n";
		}
};

class Derived : public Base	 //class derived extends base(syntax of java)
{
	public:
		int X,Y;
		
		Derived()
		{
			cout<<"inside Derived constructor\n";
		}
		~Derived()
		{
			cout<<"inside Derived deconstructor\n";
		}
		void gun()
		{
			cout<<"inside gun of Derived \n";
		}
};

int main()
{
	//derived dobj;		//static memory allocation 
Derived * ptr=NULL;

ptr=new Derived;

ptr ->fun();
ptr->gun();

delete ptr;

return 0;
}




int main()
{
	cout<<"size of Base : "<<sizeof (Base)<<"\n";	//8
	cout<<"size of Derived : "<<sizeof (Derived)<<"\n";	//16
	cout<<"size of DerivedX : "<<sizeof (DerivedX)<<"\n";	//8
	
	DerivedX dobj;
	
	dobj.fun()
	dobj.gun()
	dobj.sun()
	
	return 0;
}