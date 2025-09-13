//Write a C++ program that demonstrates the use of variables and constants. Create variables of different data types and perform operations on them.
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    float b=6.6
    char c='A';
    const double pi=3.14;
    cout<<"integer value:"<<a<<endl;
    cout<<"float value:"<<b<<endl;
    cout<<"character value:"<<c<<endl;
    cout<<"constant value of pi:"<<pi<<endl;
    //performing operations
    int sum=a+5;
    float area=pi*b*b;
    cout<<"sum of integer and 5 is:"<<sum<<endl;
    cout<<"area of circle with radius "<<b<<" is:"<<area<<endl;
    return 0;
}