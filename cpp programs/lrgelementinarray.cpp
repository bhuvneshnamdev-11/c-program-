//To find an largest element in an array
#include <iostream>
using namespace std;

int main()
{
    int a[5];

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    int largest = a[0];

    for (int i = 0;i < 5; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    cout << "Largest element = " << largest;

    return 0;
}