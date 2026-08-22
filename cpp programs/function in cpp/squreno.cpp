//function: to calculate the squre of numbers
#include<iostream>
using namespace std;
int squreofno(int a)
{
    int sum;
    sum = a*a;
    return sum;
}
int main()
{
    int b; 
    cout << "Enter any number: " << endl;
    cin >> b;
    int squre = squreofno(b);
    cout << "squre of a given number is: " << squre << endl;
    return 0;
}














