#include<iostream>
#include<random>
using namespace std;

int main()
{
    random_device bot;
    mt19937 gen(bot());
    uniform_int_distribution<> distrib(1, 100); // number generated ih n range 1-100.

    bool again = 1;
    cout<<"___________________________WELCOME TO THE GAME_______________________________"<<endl;
    while(again)
    {
        int ranum = distrib(gen);
        int usernum = -1;
        int count=1;
        while(usernum!=ranum)
        {
            cout<<"\nGuess the number: ";
            cin>>usernum;
            if(usernum==ranum)
                cout<<"You guessed the right number in "<<count<<" tries"<<", the number is "<<usernum<<endl;
            else if(usernum>ranum)
                cout<<"It's too high, guess again."<<endl;
            else
                cout<<"It's too low, guess again."<<endl;
                count++;
        } 
        cout<<"\nWant to play agian ?(press \"1\" for YES/\"0\" for NO): ";
        cin>>again;
        if(again==0)
            cout<<"\nThanks for playing, come again (^-^)";
    }
    return 0;

}