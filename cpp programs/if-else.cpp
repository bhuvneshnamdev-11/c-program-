// C++ program to demonstrate the use of if-else statement 
// by using a number is even or odd

#include<iostream>
using namespace std;   
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number is even" << endl;
    } else {
        cout << "The number is odd" << endl;
    }
    return 0;
}