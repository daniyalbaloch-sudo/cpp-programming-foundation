#include <iostream>

using namespace std;

// sum and factorial calculator
int main() {
    int choice;

    cout << "--- Sum and Factorial Calculator ---" << endl;
    cout << "1. Sum from 1 to N" << endl;
    cout << "2. Factorial of N" << endl;
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        int n;
        cout << "Enter N: ";
        cin >> n;

        if (n <= 0) {
            cout << "Please enter a positive number." << endl;
            return 0;
        }

        int sum = 0;
        cout << "\nCalculation: ";
        int temp = n;
        while (temp > 0) {
            sum += temp;
            cout << temp;
            if (temp > 1) {
                cout << " + ";
            }
            temp--;
        }
        cout << " = " << sum << endl;
    } 
    else if (choice == 2) {
        int n;
        cout << "Enter N: ";
        cin >> n;

        if (n < 0) {
            cout << "Factorial is not defined for negative numbers." << endl;
            return 0;
        }

        long long fact = 1;
        cout << "\nCalculation: ";
        if (n == 0 || n == 1) {
            cout << n << " = 1" << endl;
        } else {
            int temp = n;
            while (temp >= 1) {
                fact *= temp;
                cout << temp;
                if (temp > 1) {
                    cout << " * ";
                }
                temp--;
            }
            cout << " = " << fact << endl;
        }
        cout << "Factorial of " << n << " is: " << fact << endl;
    } 
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
