#include<iostream>
using namespace std;

	 void fun();
}
class Demo()
{
	public:
		int i;
	private:
		int j;
	protected:
		int k;
	public:
		Demo()
		{
			i=10;
			j=20;
			k=30;
		}
		friend void fun();
};

void fun()	//naked function	//demo mdhla jr value access kraychi asel tr demo cha object create keava lagto
{
	Demo obj;
	cout<<"value of i:"<<obj.i<<"/n";	
	cout<<"value of j:"<<obj.j<<"\n";	//bcz j is private
	cout<<"value of k:"<<obj.k<<"\n";
}

int main()
{
	mobj.fun();
	return 0;
}