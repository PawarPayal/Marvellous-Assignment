#include<iostream>
using namespace std

class Array
{
	public:
	int iSize;
	int iArr;
	
	Array(int iLength)
	{
		int iSize=iLength;
		Arr=new int [iSize];
	}
	~Array()
	{
		Delete[]Arr;
	}
	
};

int main()
{
Array obj1[4];

return 0;
}