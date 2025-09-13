//Write a C++ program that asks the user to guess a number between 1 and 100. The program should provide hints if the guess is too high or too low. Use loops to allow
//the user multiple attempts.
#include<iostream>
using namespace std;
int main()
{
    int secret=25;
    int guess;

    cout<<"guess the number between 1 to 100"<<endl;
    cin>>guess;

    if(guess == secret)
    {
        cout<< "congratulations you guess right number"<<endl;
    }
   

    else if(guess > secret){
        cout<<"number is high !! try again"<<endl;
    }
            else{
                cout<<"number is low !! try again"<<endl;
            }
            return 0;
        }
    