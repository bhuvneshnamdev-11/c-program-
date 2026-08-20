//array: to  check even and odd numbers
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter the values of array: " << endl;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    for(int index = 0; index <= 4; index++)
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