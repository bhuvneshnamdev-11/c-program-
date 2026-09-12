//To calculate sum of each row of 2D array
#include <iostream>
using namespace std;
int main()
{
    int arr[3][3], sum = 0;
    cout << "Enter element of 3*3 array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << " is: " << sum << endl;
    }
}