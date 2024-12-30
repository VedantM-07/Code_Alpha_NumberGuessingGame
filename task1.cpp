#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void numberGuessingGame() {
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I'm thinking of a number between 1 and 100. Can you guess what it is?\n";

    // Seed random number generator
    srand(time(0));
    int targetNumber = std::rand() % 100 + 1;
    int attempts = 0;
    int guess;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(1000, '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a valid number.\n";
            continue;
        }

        attempts++;

        if (guess < targetNumber) {
           cout << "Too low! Try again.\n";
        } else if (guess > targetNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            break;
        }
    }
}

int main() {
    numberGuessingGame();
    return 0;
}
