#include <iostream>

using namespace std;

// grading system using switch case
int main() {
    int marks;

    cout << "Enter obtained marks (0 - 100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks entered." << endl;
        return 0;
    }

    // divide by 10 to check range
    switch (marks / 10) {
        case 10:
        case 9:
            cout << "Grade: A+" << endl;
            break;
        case 8:
            cout << "Grade: A" << endl;
            break;
        case 7:
            cout << "Grade: B" << endl;
            break;
        case 6:
            cout << "Grade: C" << endl;
            break;
        case 5:
            cout << "Grade: D" << endl;
            break;
        default:
            cout << "Grade: F" << endl;
            break;
    }

    return 0;
}
