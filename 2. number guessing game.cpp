// Begginer project 2
// Number guessing game

#include <iostream>
#include <cstdlib>
using namespace std;

void banner() {
    cout << "Number Guessing Game Ver 1.0" << endl << endl;
    cout << "[ info ] You have a maximum of 20 tries before losing the game" << endl << "Begin" << endl<<endl;
    /*cout << "[ 1 ] Start" << endl << "[ 2 ] About" << endl << endl;*/
}

int main() {
    
    banner();
    
    double number, guess;
    
    srand(time(0));
    number = rand() % 1000;
    
    int tries = 0;
    while ( guess != number) {
        cout << ": ";
        cin >> guess;
        if (guess>=number*2)
        cout << "Too Big" << endl;
        else if (guess<=number/2)
        cout << "Too Small" << endl;
        else if (guess<=number*2 && guess>number)
        cout << "Try Lower" << endl;
        else if (guess>=number/2 && guess<number)
        cout << "Try Higher" << endl;
        
        tries++;
        if (tries==20) {
            cout << "Max Tries Reached , You Lose!!" << endl;
            return 0;
        }
    }
    cout << "You Won" << endl;
    cout << "Amount of tries: " << tries << endl;
}

/*
[ 1 ] start 

[ 1 ] easy ( 100 tries and 100 as max limit)
[ 2 ] moderate ( max is 1K and tries are 20 max )
[ 3 ] hard ( number can go up to 100K and only 30 tries )
*/