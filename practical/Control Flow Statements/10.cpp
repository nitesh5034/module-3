// Write a C++ program to display the multiplication table of a given number using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"multiplication table of the"<<endl;

    for( int i=1;i<=n;i++)
    {
    cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    
        
    }
    return 0;
}