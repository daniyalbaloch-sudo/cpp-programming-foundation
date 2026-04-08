#include <iostream>

using namespace std;

// custom multiplication table generator
int main() {
    int tableNumber;
    int startMultiplier;
    int endMultiplier;

    cout << "--- Custom Table Generator ---" << endl;

    cout << "Enter number to find its table: ";
    cin >> tableNumber;

    cout << "Enter start multiplier: ";
    cin >> startMultiplier;

    cout << "Enter end multiplier: ";
    cin >> endMultiplier;

    cout << "\nTable of " << tableNumber << " (" << startMultiplier << " to " << endMultiplier << "):" << endl;

    int current = startMultiplier;
    while (current <= endMultiplier) {
        cout << tableNumber << " x " << current << " = " << (tableNumber * current) << endl;
        current++;
    }

    return 0;
}
