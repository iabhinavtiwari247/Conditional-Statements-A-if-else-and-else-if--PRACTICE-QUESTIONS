//write a program to check whether a character entered by the user is a vowel or a consonant.//

#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Convert to lowercase for easier comparison
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a vowel." << endl;
    } else if ((ch >= 'b' && ch <= 'z') && !(ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
        cout << ch << " is a consonant." << endl;
    } else {
        cout << "Invalid input. Please enter an alphabetic character." << endl;
    }

    return 0;
}