#include<iostream>
using namespace std;

class rect{
	
	public:
		int l,w;
	void area()
	{
		cout<<"Area="<<l*w;
	}
};

int main()
{
	rect ob;

	cout<<"Enter the value of length: ";
	cin>>ob.l;
	cout<<"Enter the value of bredth: ";
	cin>>ob.w;
	
	ob.area();
	return 0;
	
}