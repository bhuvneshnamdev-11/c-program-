//swaping two numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "after swaping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl; 
    return 0;
}