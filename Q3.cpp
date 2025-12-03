//Program to determine if a given number is even or odd //
---Method_1---
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a num : ";
    cin >> num;
    if (num % 2 == 0) {
        cout << num << " is a Even number" << endl;
    } else if (num % 2 != 0) {
        cout << num << " is a Odd number" << endl;
    } else {
        cout << "Invalid input" << endl;
    }
    return 0;
}

---method_2---

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a num : ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
    return 0;
}
