#include<iostream>
using namespace std;
class A{
	public:
		void display()
		{
			cout<<"you are in class A now!"<<endl;
		}
};
class B{
	public:
		void display2()
		{
			cout<<"you are in class B now!"<<endl;
		}
};

class C: public A, public B{
	public:
		void display3()
		{
			cout<<"You are in class C now!"<<endl;
		}
};
int main()
{
	C ob;
	ob.display();
	ob.display2();
	ob.display3();
	
	return 0;
}