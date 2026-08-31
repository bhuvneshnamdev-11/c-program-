//array: largest number in array
#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the size of array: " << endl;
    int size;
    cin >> size;
    int *arr = new int[size];
    cout << "Enter the values of array: " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int largest = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "The largest number in array is: " << largest << endl;
    return 0;
}