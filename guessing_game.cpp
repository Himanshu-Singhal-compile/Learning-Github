#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "Guess the number (1-100):\n";
    do {
        cin >> guess;
        attempts++;
        if (guess < secret) cout << "Too low!\n";
        else if (guess > secret) cout << "Too high!\n";
        else cout << "Correct! Attempts: " << attempts << "\n";
    } while (guess != secret);

    return 0;
}
