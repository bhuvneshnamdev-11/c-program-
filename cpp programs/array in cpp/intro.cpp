//array introduction
#include <iostream>
using namespace std;
int main()
{
    //declearing an array
   //nt arr[5];

    //intializing an array
    // arr[5] = {10, 20, 30, 40, 50};
    // arr[] = {10, 20, 30, 40, 50};
    
    int multipleof2[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    // cout << multipleof2[4] << endl;
   
    // for (int index = 0; index < 10; index++)
    // {
    //     cout << multipleof2[index] << endl;
    // }

    //input in array
    int arr[5];
    for (int index = 0; index <= 4; index++)
    {
        cout << "Enter the value of index [" << index << "]:";
        cin >> arr[index];
        cout << endl;


        for (int index = 0; index <= 4;index++)
        {
            cout << arr[index] <<  " " ;
        }
    } 
    return 0;
}