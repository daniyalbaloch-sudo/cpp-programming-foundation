#include <iostream>

using namespace std;

// check driving license eligibility
int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 0 || age > 120) {
        cout << "Invalid age!" << endl;
    } else if (age < 18) {
        cout << "You are underage (" << age << " years old). You cannot drive." << endl;
    } else if (age <= 70) {
        cout << "You are " << age << " years old. You are eligible to drive." << endl;
    } else {
        cout << "You are " << age << " years old (Senior Citizen). You need medical re-evaluation to drive." << endl;
    }

    return 0;
}
