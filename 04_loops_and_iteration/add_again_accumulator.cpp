#include <iostream>
#include <string>

using namespace std;

// add numbers until user stops
int main() {
    int sum = 0;
    int num;
    string choice;

    cout << "--- Number Accumulator ---" << endl;

    do {
        cout << "Enter a number to add: ";
        cin >> num;

        sum += num;
        cout << "Current Sum: " << sum << endl;

        cout << "Add another number? (yes / stop): ";
        cin >> choice;
        cout << endl;

    } while (choice != "stop" && choice != "Stop" && choice != "no");

    cout << "Final Total Sum = " << sum << endl;

    return 0;
}
