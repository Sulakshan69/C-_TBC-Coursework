#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int maxNum, randomNumber, guess;
    char difficulty;

    // Seed the random number generator
    srand(time(0));

    // Ask user to choose difficulty
    cout << "Choose difficulty - Easy, Medium, Hard: ";
    cin >> difficulty;

    // Set range based on difficulty
    if (difficulty == 'E' || difficulty == 'e')
        maxNum = 8;
    else if (difficulty == 'M' || difficulty == 'm')
        maxNum = 30;
    else if (difficulty == 'H' || difficulty == 'h')
        maxNum = 50;
    else {
        cout << "Invalid choice! Please restart the game." << endl;
        return 1;
    }

    // Generate random number in the selected range
    randomNumber = (rand() % maxNum) + 1;

    // Start guessing game
    cout << "Guess the number between 1 and " << maxNum << ": ";
    do {
        cin >> guess;
        if (guess > randomNumber)
            cout << "Too high! Try again: ";
        else if (guess < randomNumber)
            cout << "Too low! Try again: ";
    } while (guess != randomNumber);

    cout << "Congratulations! You guessed the correct number." << endl;

    return 0;
}

