//To find largest element in 2D array
#include <iostream>
using namespace std;
int main()
{
    int arr[3][3], largest;
    cout << "Enter elements of 3*3 array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    largest = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }
    cout << "Largest element in 2D array  is: " << largest << endl;
}