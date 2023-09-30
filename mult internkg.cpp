#include<iostream>
using namespace std;

class A{
	public:
		void display()
		{
			cout<<"In display A!"<<endl;
		}
};

class B: public A
{
	public:
		void display()
		{
			cout<<"In display B!"<<endl;
		}
};

class C: public A
{
	public:
		void display()
		{
			cout<<"In display C!"<<endl;
		}
};

class D: public B, public C
{
	public:
		void display()
		{
			cout<<"In display D!"<<endl;
		}
};

int main()
{
	B a;
	C b;
	D c;
	
	a.A::display();
	a.B::display();
	b.A::display();
	b.C::display();
	c.D::display();
	
	return 0;
}