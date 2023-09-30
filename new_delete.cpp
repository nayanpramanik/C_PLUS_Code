#include<iostream>
using namespace std;

int main()
{
    int *pointer;
    pointer= new int;
    *pointer=25;
    cout<<*pointer;
    delete pointer;
   // cout<< *pointer;
    return 0;
}
