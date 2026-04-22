#include <iostream>

using namespace std;

// 3d array example
int main() {
    int arr[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };

    cout << "--- 3D Array ---" << endl;

    for (int layer = 0; layer < 2; layer++) {
        cout << "Layer " << layer << ":" << endl;
        for (int row = 0; row < 2; row++) {
            for (int col = 0; col < 2; col++) {
                cout << "arr[" << layer << "][" << row << "][" << col << "] = " << arr[layer][row][col] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
