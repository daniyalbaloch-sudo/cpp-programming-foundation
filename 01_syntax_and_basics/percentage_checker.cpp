#include <iostream>

using namespace std;

// calculate percentage out of 600
int main() {
    float obtainedMarks;
    const float totalMarks = 600.0;

    cout << "Enter obtained marks (out of 600): ";
    cin >> obtainedMarks;

    float percentage = (obtainedMarks / totalMarks) * 100.0;

    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
