//function: add two numbers
#include <iostream>
using namespace std;
int add(int a, int b)
{
    int sum = a + b;
    return sum;
}   
int main()
{
    int a, b, sum;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    sum = add(a, b);
    cout << "Sum of two numbers is: " << sum << endl;
    return 0;
}