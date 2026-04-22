#include <iostream>

using namespace std;

// iterating array using for and while loops
int main() {
    int arr[5] = {20, 30, 7, 8, 10};
    int size = 5;

    cout << "--- For Loop ---" << endl;
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    cout << "\n--- While Loop ---" << endl;
    int i = 0;
    while (i < size) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
        i++;
    }

    return 0;
}
