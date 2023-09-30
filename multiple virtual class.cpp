#include<iostream>
using namespace std;

class student
{
	protected:
		int roll;
	public:
		void getnumber(int x)
		{
			roll=x;
		}
		void putnumber()
		{
			cout<<"Roll no: "<<roll<<endl;
		}
};

class test: virtual public student
{
	protected:
		float part1, part2;
	public:
		void getmarks(float x, float y)
		{
			part1=x;
			part2=y;
		}
		void putmarks()
		{
			cout<<"Marks Obtained:\n";
			cout<<"part1="<<part1<<endl;
			cout<<"part2="<<part2<<endl;
		}
};

class sport: public virtual student
{
	protected:
		float score;
	public:
		void getscore(float s)
		{
			score=s;
		}
		void putscore()
		{
			cout<<"Sport wt: "<<score<<endl;
		}
};

class result: public test, public sport
{
	float total;
	public:
		void display()
		{
			total=part1+part2+score;
			putnumber();
			putmarks();
			putscore();
			
			cout<<"Total score: "<<total<<endl;
			
		}
};

int main()
{
	result ob;
	ob.getnumber(675);
	ob.getmarks(30.5,25.5);
	ob.getscore(7);
	ob.display();
	
//	cout<<"Enter the Roll number: ";
//	cin>>ob.getnumber(5);
//	cout<<"Enter the marks: ";
//	cin>>ob.getmarks();
//	cout<<"Enter the score: ";
//	cin>>ob.getscore();
//	cout<<endl<<"The total marks are: "<<ob.display();
	
	return 0;
}