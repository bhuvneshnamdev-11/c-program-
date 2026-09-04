//character array swaping
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[100], b[100], temp[100];
    cout << "Enter first string: ";
    cin.getline(a, 100);
    cout << "Enter second string: ";
    cin.getline(b, 100);
    //swaping
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
    cout << "After swapping: " << endl;
    cout << "First string: " << a << endl;
    cout << "Second string: " << b << endl;
    return 0;
}