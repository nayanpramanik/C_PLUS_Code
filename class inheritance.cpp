#include<iostream>
using namespace std;

class A
{
	public:
		int x;
		void display1()
		{
			cout<<"In A class!"<<endl;
			cout<<"x="<<x<<endl;
		}
};

class B: public A
{
	public:
		int y;
		void display2()
		{
			cout<<"In B class!"<<endl;
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
		}
};

class C: public B
{
	public:
		int  z;
		void display3()
		{
			cout<<"In C class!"<<endl;
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
};

int main()
{
	C ob;
	cout<<"Enter the value of x: ";
	cin>>ob.x;
	cout<<"Enter the value of y: ";
	cin>>ob.y;
	cout<<"Enter the value of z: ";
	cin>>ob.z;
	
	ob.display1();
	ob.display2();
	ob.display3();
	
	return 0;
}