#include <iostream>

using namespace std;

// while loop practice
int main() {
    int choice;

    cout << "--- While Loop Menu ---" << endl;
    cout << "1. Print 1 to 100" << endl;
    cout << "2. Print even numbers from 100 down to 1" << endl;
    cout << "3. Print odd numbers from 1 to 100" << endl;
    cout << "4. Number Guessing Game" << endl;
    cout << "Enter choice (1-4): ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nCounting 1 to 100:" << endl;
        int i = 1;
        while (i <= 100) {
            cout << i << " ";
            if (i % 10 == 0) cout << endl;
            i++;
        }
    } 
    else if (choice == 2) {
        cout << "\nEven numbers from 100 down to 1:" << endl;
        int num = 100;
        while (num >= 1) {
            if (num % 2 == 0) {
                cout << num << " ";
                if (num % 20 == 0) cout << endl;
            }
            num--;
        }
        cout << endl;
    } 
    else if (choice == 3) {
        cout << "\nOdd numbers from 1 to 100:" << endl;
        int num = 1;
        while (num <= 100) {
            if (num % 2 != 0) {
                cout << num << " ";
                if ((num + 1) % 20 == 0) cout << endl;
            }
            num++;
        }
        cout << endl;
    } 
    else if (choice == 4) {
        cout << "\nGuess the number!" << endl;
        const int secret = 10;
        int guess;

        cout << "Enter guess: ";
        cin >> guess;

        while (guess != secret) {
            cout << "Wrong guess! Try again: ";
            cin >> guess;
        }

        cout << "Correct! The number was " << secret << endl;
    } 
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
