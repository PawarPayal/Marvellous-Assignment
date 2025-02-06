#include<iostream>
using namespace std;
//user defined class declaration
class Maths 			//no memory allocation
{
public:				//access specifier
	int iNo1;		//characteristics
	int iNo2;		//characteristics
											//(constructor is used to initialize memory)
	Maths()					//behavior		//constructor(default)	//default means kahi value ghet nai
	{
		iNo1=0;
		iNo2=0;
	}
	
	Maths(int A,int B)		//behavior		//constructor(parameterized)	//parameterized means kahi tri value gheto	
	{
		iNo1=A;
		iNo2=B;
	}

~Maths()
{
	//Desructor
}

	int Addition()				//behavior
	{
		return iNo1+iNo2;
	}
	
	int subtraction()			//behavior
	{
		return iNo1-iNo2; 
	}
};

int main()
{
	Maths mobj1;			//8 byte		//local variables
	Maths mobj2(11,10);		//8 byte		//local variables
	int ret=0;

	ret=mobj2.Addition();
	cout<<"Addition is :"<<ret<<"\n";
	
	ret=mobj1.Addition();
	cout<<"Addition is : "<<ret<<"\n";
	
	return 0;

}