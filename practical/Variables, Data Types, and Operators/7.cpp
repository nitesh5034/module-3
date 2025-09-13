//Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators
#include<iostream>
using namespace std;
int main()
{
    int a=5,b=3;
    //arithmetic operators
    cout<<"Arithmetic Operators:"<<endl;
    cout<<"a + b = "<<a+b<<endl;
    cout<<"a - b = "<<a-b<<endl;
    cout<<"a * b = "<<a*b<<endl;
    cout<<"a / b = "<<a/b<<endl;
    cout<<"a % b = "<<a%b<<endl;

    //relational operators
    cout<<"\nRelational Operators:"<<endl;
    cout<<"a == b: "<<(a==b)<<endl;
    cout<<"a != b: "<<(a!=b)<<endl;
    cout<<"a > b: "<<(a>b)<<endl;
    cout<<"a < b: "<<(a<b)<<endl;
    cout<<"a >= b: "<<(a>=b)<<endl;
    cout<<"a <= b: "<<(a<=b)<<endl;

    //logical operators
    cout<<"\nLogical Operators:"<<endl;
    cout<<"(a > 0) && (b > 0): "<<((a>0) && (b>0))<<endl;
    cout<<"(a > 0) || (b < 0): "<<((a>0) || (b<0))<<endl;
    cout<<"!(a > 0): "<<(!(a>0))<<endl;

    //bitwise operators
    cout<<"\nBitwise Operators:"<<endl;
    cout<<"a & b = "<<(a&b)<<endl;
    cout<<"a | b = "<<(a|b)<<endl;
    cout<<"a ^ b = "<<(a^b)<<endl;
    cout<<"~a = "<<(~a)<<endl;
    cout<<"b << 1 = "<<(b<<1)<<endl;
    cout<<"b >> 1 = "<<(b>>1)<<endl;

    return 0;
}   