//To find transpose od 2D array
#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    cout << "Enter 9 elements:" << endl;

    // Input
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Transpose of matrix:" << endl;

    // Transpose
    for(int j = 0; j < 3; j++) {
        for(int i = 0; i < 3; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}