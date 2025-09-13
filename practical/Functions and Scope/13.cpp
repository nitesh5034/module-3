//Write a C++ program that calculates the factorial of a number using recursion
#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n<=1)
    return 1;
    else
    return n*factorial(n-1);

}
int main()
{
    int  num;
    cout<<"enter a number"<<endl;
    cin>>num;
    if(num<0)
    cout<<"factorial of negative number is not defied"<<endl;
    else
    cout<<"factorial of "<<num<<" is "<<factorial(num)<<endl;
    return 0;
}