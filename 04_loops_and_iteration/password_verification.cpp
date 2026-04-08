#include <iostream>

using namespace std;

// password check with do-while loop
int main() {
    int password;
    const int correctPassword = 1122;
    int attempts = 0;

    cout << "--- Password Verification ---" << endl;

    do {
        cout << "Enter 4-digit PIN: ";
        cin >> password;
        attempts++;

        if (password != correctPassword) {
            cout << "Incorrect password, try again.\n" << endl;
        }

    } while (password != correctPassword);

    cout << "\nAccess Granted! Attempts: " << attempts << endl;

    return 0;
}
