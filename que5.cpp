// Program to check whether a person is eligible to vote or not. // 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string person;
    cout << "Enter the person's name: ";
    cin >> person;

    int age;
    cout << "Enter the person's age: ";
    cin >> age;

    if (age >= 18) {
        cout << person << " is eligible to vote." << endl;
    } else {
        cout << person << " is not eligible to vote." << endl;
    }

    return 0;
}
