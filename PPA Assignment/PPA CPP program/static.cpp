#include<iostream>
using namespace std;

class Demo
{
	public:
	int i;				//instance variable
	int j;				//instance variable
	static int k;		//class variable
	static int l;		//class variable
	
	Demo()					//default        //iand j are constructor 
	{
		i=0;
		j=0;
	}
	Demo(int a,int b)		//parameterized			 
	{
		i=a;
		j=b;
	}
	//void fun (const Demo *this)
	void fun()		//instance method
	{
		//access static + nonstatic
		cout<<"inside nonstatic method fun\n";
		cout<<"value of i:"<<this->i<<"\n";
		cout<<"value of j:"<<this->j<<"\n";
		cout<<"value of k:"<<k<<"\n";
		cout<<"value of l:"<<l<<"\n";
	}
	
	//static void gun()
	static void gun()		//class method
	{
		//access only static
		cout<<"inside static method gun\n";
		cout<<"value of k:"<<k<<"\n";
		cout<<"value of l:"<<l<<"\n";
	}
};

//load time variables
int Demo::k=0;		//ith memory milte
int Demo::l=0;

int main()
{
	cout<<"inside main\n";
	cout<<"value of k:"<<Demo::k<<"\n";		//0
	cout<<"value of l:"<<Demo::l<<"\n";		//0
	
	Demo ::gun();
	Demo obj1(10,11);
	Demo obj2(20,21);
	Demo obj3;
	
	cout<<"value of i in obj1:"<<obj1.i<<"\n";		//10
	cout<<"value of i in obj2:"<<obj2.i<<"\n";		//20
	
	cout<<"value of j in obj1:"<<obj1.j<<"\n";		//11
	cout<<"value of j in obj2:"<<obj2.j<<"\n";		//21
	
	obj1.fun();		//fun(&obj1);
	obj2.fun();		//fun(&obj2);
	
	obj1.gun();		//Demo::gun();
	
    return 0;
}


//size of objects is the summation of its non static charcteristics
//sizeof(obj)=sizeof(i)+sizeof(j)
//sizeof(obj)=4+4;
//sizeof(obj)=8