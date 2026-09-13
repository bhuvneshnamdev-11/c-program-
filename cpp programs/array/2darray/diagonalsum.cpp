//To calculate the sum diagonal elements of 2D array
#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int sum = 0;

    cout << "Enter 9 elements:" << endl;

    // Input
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Sum of main diagonal
    for(int i = 0; i < 3; i++) {
        sum = sum + arr[i][i];
    }

    cout << "Sum of main diagonal = " << sum;

    return 0;
}