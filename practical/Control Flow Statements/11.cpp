//Write a program that prints a right-angled triangle using stars(*) with a nested loop.
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number of rows"<<endl;
    cin>> a;
    
        for(int i=1; i <= a; i++)
        {
            for(int j=1; j<=i; j++)
            {
        
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}

