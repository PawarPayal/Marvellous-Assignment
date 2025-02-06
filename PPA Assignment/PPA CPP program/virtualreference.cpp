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
 Derived dobj;
 Base &bref=dobj;		//upcasting

//bref is a reference of type base refering to dobj which is object of derived class	
	bref.fun();	//base fun
	bref.gun();	//derived gun
	bref.sun();	//base sun
    bref.run();	//derived run 
	//bref.mun();	//error bcz bp has no mun function
	
	return 0;
}