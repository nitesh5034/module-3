//Write a C++ program that takes a student’s marks as input and calculates the grade based on if-else conditions.
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter studnts marks:";
    cin>>marks;
    if(marks>=90)
    cout<<"grade A"<<endl;
    else if (marks>=80)
    cout<<"grade B"<<endl;
    else if (marks>=70)
    cout<<"grade C"<<endl;
    else if (marks>=60)
    cout<<"grade D"<<endl;
    else
    cout<<"grade F"<<endl;
    return 0;

  
    
}