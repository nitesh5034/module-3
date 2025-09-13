// Write a C++ program that defines functions for basic arithmetic operations (add,subtract, multiply, divide). The main function should call these based on user input.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    char op;
    cout<<"enter an operator(+,-,*,/)"<<endl;
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<"sum is"<<a+b<<endl;
        break;
        case '-':
        cout<<"difference is"<<a-b<<endl;
        break;                                                  
        case '*':
        cout<<"product is"<<a*b<<endl;
        break;
        case '/':
        if(b!=0)
        cout<<"quotient is"<<a/b<<endl;
        else
        cout<<"division by zero is not allowed"<<endl;
        break;
        default:
        cout<<"invalid operator"<<endl;
        break;

    }
    return 0;
}