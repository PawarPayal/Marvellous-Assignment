#include<iostream>
using namespace std;

class Circle;
{
   public:				//access specifier
	float PI;			//characteristics 
	float Radius;		//characteristics
	
	Circle()				//default constructor
	{
		PI=3.14;
		Radius=0.0;
	}
	Circle(float A,float B);	//parameterized constructor
	{
		PI=A;
		PI=B;
	}
	void Display()				//concrete method 
	{
		cout<<"value of radius is : "<<Radius<<"\n";
	} 
	virtual float Area()=0;				//abstract method
	virtual float Circumference()=0;	//abstract method
};

class marvellous:public Circle
{
	public :
	marvellous():Circle()
	{
	}
	marvellous(float x,float y):Circle(x,y)
	{
	}
	
		float Area()		//concrete method
		{
			float Ans = PI * Radius * Radius;
			return Ans;
		}
		float Circumference()	//concrete method
		{
			float Ans =0.0;
			Ans=2*PI*Radius;
			return Ans;
		}
};
int main()
{
	marvellous mobj1;
	marvellous mobj2(3.14,10.89);
	
	float fret=0.0;
	
	fret=mobj2.Area();
	cout<<"Area is:"<<fret<<"\n";
	
	fret=mobj2.circumference();
	cout<<"circumference is:"<<fret<<"\n";
	
	return 0;
}