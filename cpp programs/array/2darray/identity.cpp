//To find identity matrix of 2D array
#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    bool identity = true;

    cout << "Enter 9 elements:" << endl;

    // Input
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Check identity matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {

            if(i == j) {
                // Main diagonal should be 1
                if(arr[i][j] != 1) {
                    identity = false;
                }
            }
            else {
                // Other elements should be 0
                if(arr[i][j] != 0) {
                    identity = false;
                }
            }
        }
    }

    if(identity) {
        cout << "Matrix is an Identity Matrix";
    }
    else {
        cout << "Matrix is NOT an Identity Matrix";
    }

    return 0;
}