//array: to find smalllest number in array
#include <iostream>
using namespace std;
int main()
{
    cout << "enter the size of array: ";
    int size;
    cin >> size;
    int *arr = new int[size];
    cout << "enter the value of array: " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int smallest = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "The smallest number in the array is: " << smallest << endl;
    return 0;
}