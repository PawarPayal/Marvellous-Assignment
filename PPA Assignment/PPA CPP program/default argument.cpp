#import<iostream>
using namespace std;

class Demo
{
	public:
		int A,B;
		Demo()
		{
			A=0;
			B=0;
		}
		Demo(int i)
		{
			A=i;
			B=0;
		}
		Demo(int A,int B)
		{
			A=i;
			B=j;
		}
		
}
int main()
{
Demo obj1;
Demo obj2(11);
Demo obj3(11,21)
return 0;
}