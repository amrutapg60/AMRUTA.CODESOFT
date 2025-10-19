#include<iostream>
#include<cstlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(0));

    int number=rand()%100+1;
    int guess;
    
    cout<<"guess the number game!"<<end1;
    cout<<"i have picked a number between 1 and 100."<<end1;

    do{
        cout<<"enter your guess:";
        cin>>guess;

        if(guess>number)
        {
            cout<<"too high! tey again."end1;
        }
        else if (guess < number){
            cout<<"too low! tey again."end1;
        }
        else{
            cout<<"correct! you guessed the number!"end1;
        }
        

    } while (guess !=number);

    return 0;
}
