#include <iostream>

using namespace std;

// 2d array / matrix practice
int main() {
    int matrix[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    cout << "--- 2D Matrix (3x2) ---" << endl;

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 2; col++) {
            cout << matrix[row][col] << "\t";
        }
        cout << endl;
    }

    return 0;
}
