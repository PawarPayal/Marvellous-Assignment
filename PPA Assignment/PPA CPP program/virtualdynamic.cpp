#include<iostream>
using namespace std;

class Base
{
	public:   		//8bytes
		int A,B;		//
		void fun(){cout<<"Base fun\n";}		//1000
		virtual void gun(){cout<<"Base gun\n";}		//2000
		virtual void sun(){cout<<"Base sun\n";}		//3000
		virtual void run(){cout<<"Base run\n";}		//4000
};

class Derived:public Base
{
	public:								//8   +   8
		int X,Y;		//16 bytes 	//derived +  base
		 void gun() {cout<<"Derived gun\n";	}	//5000
		virtual void run() {cout<<"derived run\n";	}   //6000
	    virtual void mun(){cout<<"Derived mun\n";}		//7000
};
int main()
{
	Base *bp=new Derived;
	bp =new Derived ;	//upcasting
	//bp =(Derived *)malloc(sizeof(derived));
	bp->fun();	//base fun
	bp->gun();	//derived gun
	bp->sun();	//base sun
	bp->run();	//derived run 
	//bp->mun();	//error bcz bp has no mun function
	
	return 0;
}