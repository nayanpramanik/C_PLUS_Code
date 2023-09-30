#include<iostream>
using namespace std;
class A{
	int x;
	public:
		int p;
		void set_a(int a)
		{
			x=a;
		}
		void display_a()
		{
			cout<<"The value of x is that:"<<x<<endl;
		}
};

class B:public A{
	int y;
		public:
			int q;
			void set_b(int b)
			{
				y=b;
			}
			void display_b()
			{
				cout<<"The value of y is that: "<<y<<endl;
			}
};
  class C: public B{
  	          int z;
  		public:
  			  int r;
  			void set_c(int c)
  			{
  				z=c;	
			}
			void display_c()
			{ 
				cout<<"The value of z is that: "<<z<<endl;
			}
  };

int main()
{
	C ob;
	cout<<"Enter the value of x: ";
	cin>>ob.p;
	cout<<"Enter the value of y: ";
	cin>>ob.q;
	cout<<"Enter the value of z: ";
	cin>>ob.r;
	
	cout<<endl;
	
	ob.set_a(ob.p);
	ob.set_b(ob.q);
	ob.set_c(ob.r);
	
	ob.display_a();
	ob.display_b();
	ob.display_c();
	return 0;
}