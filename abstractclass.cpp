#include<iostream>
using namespace std;

class b
{
    public:

    virtual void out()=0;
};

class c : public b
{
    public :
    void out()
    {
        cout<<"I AM IN DRIVE CLASS\n"
    }

};

int main()
{
    b *p;
    c ob;
    p=&ob;
    p->out();
    return 0;
}