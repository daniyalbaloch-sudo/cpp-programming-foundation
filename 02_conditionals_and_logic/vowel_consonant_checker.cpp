#include <iostream>

using namespace std;

// check vowel or consonant
int main() {
    char letter;

    cout << "Enter any letter: ";
    cin >> letter;

    // check vowel
    if (letter == 'a' || letter == 'A' ||
        letter == 'e' || letter == 'E' ||
        letter == 'i' || letter == 'I' ||
        letter == 'o' || letter == 'O' ||
        letter == 'u' || letter == 'U') {
        cout << letter << " is a Vowel." << endl;
    } 
    // check consonant
    else if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {
        cout << letter << " is a Consonant." << endl;
    } 
    else {
        cout << letter << " is not an alphabet letter." << endl;
    }

    return 0;
}
