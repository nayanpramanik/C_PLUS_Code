#include<iostream>
#include<math.h>
using namespace std;

void area(int x, int  y, int z)
{
	float s=(x+y+z)/2;
	float ar=sqrt(s*(s-x)*(s-y)*(s-z));
	cout<<"\nArea 1="<<ar<<endl;
}

void area(int x,int y)
{
	cout<<"Area2="<<0.5*x*y<<endl;
}

void area(int x)
{
	cout<<"Area3="<<sqrt(3)/4*x*x<<endl;
}

int main()
{
	int a,b,c;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	cout<<"Enter the third number: ";
	cin>>c;
	
	area(a,b,c);
	area(a,b);
	area(a);
	

	
	return 0;
}
