#include<iostream>
using namespace std;

int main()
{
    char op;
    cout<<"Select operator:\n";
    cin>>op;
    float num1, num2;
    cout<<"Enter number:\n";

    cin >> num1 >> num2;
    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;

    default:
        cout << "Error! operator is not correct";
        break;
    }
    return 0;
}