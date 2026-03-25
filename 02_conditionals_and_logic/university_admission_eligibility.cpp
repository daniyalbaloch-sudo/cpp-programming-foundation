#include <iostream>

using namespace std;

// university admission eligibility checker
int main() {
    cout << "Enter marks for 7 subjects (out of 100 each):" << endl;

    float comp, phys, math, eng, ss, isl, urdu;

    cout << "Computer: ";
    cin >> comp;

    cout << "Physics: ";
    cin >> phys;

    cout << "Math: ";
    cin >> math;

    cout << "English: ";
    cin >> eng;

    cout << "Social Studies: ";
    cin >> ss;

    cout << "Islamic Studies: ";
    cin >> isl;

    cout << "Urdu: ";
    cin >> urdu;

    float obtainedMarks = comp + phys + math + eng + ss + isl + urdu;
    const float totalMarks = 700.0;
    float percentage = (obtainedMarks / totalMarks) * 100.0;

    cout << "\n------------------------------" << endl;
    cout << "Total Marks: " << totalMarks << endl;
    cout << "Obtained Marks: " << obtainedMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "------------------------------" << endl;

    // 80% criteria (560 marks)
    if (obtainedMarks >= 560.0) {
        cout << "Congratulations! You are eligible for admission." << endl;
    } else {
        cout << "Sorry, you do not meet the 80% minimum criteria." << endl;
    }

    return 0;
}
