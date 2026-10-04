//To find greatest common divisor of a number
#include<iostream>
using namespace std;
int main()
{
	int a,b,reminder;
	cout << "Enter two numbers: " << endl;
	cin >> a >> b;
	while (b != 0)
	{
		reminder = a % b;
		a = b;
		b = reminder;
	}
	cout << "GCD = " << a << endl;
	return 0;
}