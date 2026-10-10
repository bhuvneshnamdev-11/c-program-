//swap to numbers without using third variable
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "Enter the value of a: " << endl;
	cin >> a;
	cout << "Enter the value of b: " << endl;
	cin >> b;
	//swaping
	a = a+b;
	b = a-b;
	a = a-b;
	cout << "after swaping: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}