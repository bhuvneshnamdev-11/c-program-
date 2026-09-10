//To count even and odd numbers in a 2D array
#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int even = 0, odd = 0;

    cout << "Enter 9 elements:" << endl;

    // Input
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Count even and odd
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {

            if(arr[i][j] % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
    }

    cout << "Even elements = " << even << endl;
    cout << "Odd elements = " << odd << endl;

    return 0;
}