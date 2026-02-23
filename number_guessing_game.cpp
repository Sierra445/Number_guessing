#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void printTitle() {
    cout << "==============================" << endl;
    cout << "  WELCOME TO GUESS THE NUMBER  " << endl;
    cout << "==============================" << endl << endl;
}

void printDivider() {
    cout << "------------------------------" << endl;
}

int main() {
    srand(time(0));
    int numberToGuess = rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    printTitle();
    cout << "I have chosen a number between 1 and 100." << endl;

    while (userGuess != numberToGuess) {
        printDivider();
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "🎉 Congratulations! You guessed it in " << attempts << " attempts. 🎉" << endl;
        }
    }

    printDivider();
    cout << "Thanks for playing!" << endl;

    return 0;
}