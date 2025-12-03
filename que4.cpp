//program to compare two integers and print which one is greater or if they are equal//
-----------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    cout << "Enter first integer (a): ";
    cin >> a;
    cout << "Enter second integer (b): ";
    cin >> b;
    if (a > b) {
        cout << "a is greater than b" << endl;
    } else if (a < b) {
        cout << "b is greater than a" << endl;
    } else {
        cout << "They are equal" << endl;
    }
return 0;
}
