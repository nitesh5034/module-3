//Write a program that demonstrates the difference between local and global variables in C++. Use functions to show scope.
#include<iostream>
using namespace std;
int globalvar=10;
void func()
{
    int localvar=20;
    cout<<"inside function"<<endl;
    cout<<"local variable: "<<localvar<<endl;
    cout<<"global variable: "<<globalvar<<endl;

}
int main()
{
    int num=30;
    cout<<"inside function"<<endl;
    cout<<"local variable :"<<num<<endl;
    cout<<"global variable :"<<globalvar<<endl;

    func();
    return 0;

}
