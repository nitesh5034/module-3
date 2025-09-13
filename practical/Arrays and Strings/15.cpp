// Write a C++ program that accepts an array of integers, calculates the sum and average , and displays the results
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the num"<<endl;
    cin>>num;
    int arr[num];
    int sum = 0;

    cout<<"numbers\t"<<num<<"integers"<<endl;

    for(int i=1; i<=num; i++){
            cin>>arr[i];
   sum=+arr[i];
    }
    double average = (double) sum;
    cout<<"sum"<<sum<<endl;
    cout<<"average"<<average<<endl;

    return 0;

}