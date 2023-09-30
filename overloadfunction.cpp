#include<iostream>
using namespace std;

int area(int a, int b)
{
    int Area=a*b;
}

float area(float c)
{
    float Area=c*2;
}

int main()
{
    cout<<"Area is:\n"<<area(9,2)<<endl;
    cout<<"Area is:\n"<<area(6.0)<<endl;
    return 0;
}