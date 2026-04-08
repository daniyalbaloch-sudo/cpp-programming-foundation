#include <iostream>

using namespace std;

// table of 9 using while loop
int main() {
    cout << "Table of 9:" << endl;

    int i = 1;
    const int num = 9;

    while (i <= 10) {
        cout << num << " * " << i << " = " << (num * i) << endl;
        i++;
    }

    return 0;
}
