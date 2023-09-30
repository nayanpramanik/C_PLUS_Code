#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter the age:\n";
    cin>>age;
    try
    {
        if(age>18)
        {
            cout<<"you are eligible";
        }
        else{
            throw(age);
        }
    }
    catch(int mynum)
    {
        cout<<"You are not eligible\t";
        cout<<"Age is:"<<mynum;
    }
    return 0;
}