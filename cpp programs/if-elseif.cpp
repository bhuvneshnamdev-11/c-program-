// C++ program to demonstrate the use of if-else if-else statement
// by using a number to check whether it is positive or negative or zero

#include<iostream>
using namespace std;
int main() {

    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number == 0) {
        cout << "the number is zero" << endl;
    } else if (number > 0) {
        cout << "the number is positive" << endl;
    } else {
        cout << "the number is negative" << endl;
    }
    return 0;
}