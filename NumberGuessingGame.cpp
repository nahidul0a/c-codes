//Guess the number game
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int num,guess,tries =0;

    srand(time(nullptr));
    num = rand()%100+1;

    cout<<"**********Nummber Guessing Game**********"<<endl;
    cout<<"Guess the number between 1 to 100\nYou have 7 tries"<<endl;
    while(tries<7)
    {
        cin>>guess;
        tries++;

        if(guess>num)
        {
            cout<<"Too high! try something lower"<<endl;
        }
        
        else if(guess<num)
        {
            cout<<"Too low! Try something higher"<<endl;
        }

        // else if(guess==num)
        // {
        //     cout<<"you have completed the game in "<<tries<<" tries"<<endl;
        // }
        else
        {
            cout<<"you have completed the game in "<<tries<<" tries"<<endl;
        }
    }
    if(guess!=num)
    {
        cout<<"you have lost the game"<<endl;
    }


    cout<<"The number was "<<num<<"\n******************"<<endl;

}