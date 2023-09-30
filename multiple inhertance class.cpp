#include<iostream>
using namespace std;
class A{
	public:
		void display()
		{
			cout<<"In A class!";
		}
};

class B{
	public:
		void display()
		{
			cout<<"In B class!";
		}
};

class C: public A, public B{
	public:
		void display()
		{
			cout<<"In C class!";
		}
};

class D: public A, public B{
	public: 
	void display()
	{
		cout<<"In D class!";
	}
};

	int main()
	{
		C ob;
		D pb;
		
		ob.A::display();
		ob.B::display();
		ob.C::display();
		
		pb.A::display();
		pb.B::display();
		pb.D::display();
		
		return 0;
	}