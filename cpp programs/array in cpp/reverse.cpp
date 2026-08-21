//array: reverseing of array
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
    cout << "The reverse of array is: " << endl;
    int i = 0; 
    int j = size - 1;
    while(i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for(int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}