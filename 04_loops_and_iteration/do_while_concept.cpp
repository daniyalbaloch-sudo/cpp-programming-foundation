#include <iostream>

using namespace std;

// do-while loop practice
int main() {
    int choice;

    cout << "--- Do-While Loop Menu ---" << endl;
    cout << "1. Count 1 to 5" << endl;
    cout << "2. Sum from 1 to N" << endl;
    cout << "3. Even numbers from 0 to 100" << endl;
    cout << "Enter choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nCounting 1 to 5:" << endl;
        int num = 1;
        do {
            cout << num << endl;
            num++;
        } while (num <= 5);
    } 
    else if (choice == 2) {
        int n;
        cout << "Enter N: ";
        cin >> n;

        int num = n;
        int sum = 0;
        do {
            sum += num;
            num--;
        } while (num > 0);

        cout << "Sum: " << sum << endl;
    } 
    else if (choice == 3) {
        cout << "\nEven numbers from 0 to 100:" << endl;
        int num = 0;
        do {
            if (num % 2 == 0) {
                cout << num << " ";
                if ((num + 2) % 20 == 0) cout << endl;
            }
            num++;
        } while (num <= 100);
        cout << endl;
    } 
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
