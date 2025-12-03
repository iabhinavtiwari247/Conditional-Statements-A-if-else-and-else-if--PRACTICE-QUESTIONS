// Program to check whether a person is eligible to vote or not. // 

#include <iostream>
using namespace std;
int main() {
    char person;
    cout << "Enter a person";
    cin >> person;
    int age;
    cout << "Enter age of person";
    cin >> age;
    if (age >= 18) {
        cout << person << " is eligible to vote." << endl;
    } else {
        cout << person << " is not eligible to vote." << endl;
    }
return 0;
}
