//Two calculate sum of 2D array elements
#include <iostream>
using namespace std;
int main()
{
    int arr[3][3], sum = 0;
    cout << "Enter elements of 3*3 array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }
    cout << "sum of 2D array elements is: " << sum << endl;
}