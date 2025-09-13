//Write a C++ program that performs both implicit and explicit type conversions and prints the results.
#include<iostream>
using namespace std;
int main()
{
    int a=10,b=3;
    //implicit type convrsion
    float result1=a/b;
    cout<<"result of implicit type conversion(a/b):"<<result1<<endl;
    //explixit type conversion
    float result2=static_cast<float>(a)/b;
    cout<<"result of explicit type conversion(a/b):"<<result2<<endl;
    return 0;
}
