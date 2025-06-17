#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int num = (rand() % 100) + 1;
    int guess;
    cout<<endl;
    cout << "------Number Guessing Game------" << endl;
    cout<<endl;

    do{
        cout << "->Guess a number between 1 to 100 : ";
        cin >> guess;
        if(guess > num){
            cout<<"~You'r number is large , guess again \n";
        }else if(guess < num){
            cout<<"~You'r number is small , guess again \n";
        }else{
            cout<<"       Congratulations!       "<<endl;
            cout<<"You guessed the correct number \n";
        }
    }while (guess != num);

    return 0;
}