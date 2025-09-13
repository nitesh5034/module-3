//Write a C++ program that accepts user input for their name and age and then
//displays a personalized greeting. Objective: Practice input/output operations using cin and cout.
#include<iostream>
using namespace std;
int main()
{
    string name;
    int age;
    cout<<"enter your name:";
    cin>>name;
    cout<<"enter your age:";
    cin>>age;
    cout<<"hello !!\n"<<name<<"you are\n"<<age<<"years old";
    return 0;

}