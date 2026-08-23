//array: move 0 at last 
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
    int index = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }
    while(index < size)
    {
        arr[index] = 0;
        index++;
    }
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}