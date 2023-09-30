#include<iostream>
using namespace std;

class alpha
{
	int x;
	public:
		alpha(int i)
		{
			x=i;
			cout<<"alpha initialised!"<<endl;
		}
		void show_x()
		{
			cout<<"x= "<<x<<endl; 
		}
};

class beta
{
	int y;
		public:
			beta(int j)
			{
				y=j;
				cout<<"beta Initialised!"<<endl;
			}
			void show_y()
			{
				cout<<"y= "<<y<<endl;
			}
};

class gamma: public beta, public alpha
{
	int m,n;
		public:
			gamma(int a, int b, int c, int d): alpha(a),beta(b)
			{
				m=c;
				n=d;
				cout<<"gamma initialixed!"<<endl;
			}
			void show_mn()
			{
				cout<<"m= "<<m<<endl;
				cout<<"n= "<<n<<endl;
			}
};

int main()
{
	gamma a(10,20,30,40);
	a.show_x();
	a.show_y();
	a.show_mn();
	
	return 0;
}
