//array: to  check even and odd numbers
#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the size of array: ";
    int size;
    cin >> size;
    int *arr = new int[size];
    cout << "Enter the values of array: " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for(int index = 0; index < size; index++)
   {
      if(arr[index] % 2 == 0)
      {
          cout << arr[index] << " is even number" << endl;
      }
      else
      {
          cout << arr[index] << " is odd number" << endl;
      }
    }  
    return 0;
}