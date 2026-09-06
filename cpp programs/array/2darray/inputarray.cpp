//To take input and print array
#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    // Taking input
    cout << "Enter 9 elements: " << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Printing array
    cout << "2D Array is:" << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}