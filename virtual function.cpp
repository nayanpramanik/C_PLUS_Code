#include<iostream>
using namespace std;

class A
{
	public:
		virtual void display()
		{
			cout<<"In A class!"<<endl;
		}
};

class B: public A
{
	public:
		void display()
		{
			cout<<"In b class!"<<endl;
		}
};

int main()
{
	B ob;
	A *ptr;
	A=&ob;
	
	ob.display(); //runtime or dynamic poly... 
				  //output is that "In B class!"
	
	ptr->display(); //static or compile time poly...
					//output is that "In A class!"
	
	return 0;
}