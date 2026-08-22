//funtion: reversening of number
#include<iostream>
using namespace std;
int reverseofno(int a)
{
    int reverse = 0;
      while(a > 0)
    {
        int digit = a % 10;
        reverse = reverse * 10 + digit;
        a = a / 10;
    }
    return reverse;
}
int main()
{
    int a;

    cout << "Enter a number: ";
    cin >> a;

    int result = reverseofno(a);

    cout << "Reverse of given number is = " << result << endl;

    return 0;
}
