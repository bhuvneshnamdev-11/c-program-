//To count positive, negative and zero numbers in 2D array
#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int positive = 0, negative = 0, zero = 0;

    cout << "Enter 9 elements:" << endl;

    // Input
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Count positive, negative and zero
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {

            if(arr[i][j] > 0) {
                positive++;
            }
            else if(arr[i][j] < 0) {
                negative++;
            }
            else {
                zero++;
            }
        }
    }

    cout << "Positive elements = " << positive << endl;
    cout << "Negative elements = " << negative << endl;
    cout << "Zero elements = " << zero << endl;

    return 0;
}