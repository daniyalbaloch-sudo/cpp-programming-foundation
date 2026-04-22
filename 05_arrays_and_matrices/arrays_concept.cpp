#include <iostream>

using namespace std;

// 1d array example
int main() {
    int array1[5] = {20, 30, 7, 8, 10};
    int array2[5] = {2, 3, 5, 9, 8};

    cout << "--- 1D Arrays ---" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Index [" << i << "]: array1 = " << array1[i] 
             << " | array2 = " << array2[i] 
             << " | Sum = " << (array1[i] + array2[i]) << endl;
    }

    return 0;
}
