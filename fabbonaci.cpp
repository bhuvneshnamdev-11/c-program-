//program to generate fabbonaci series to nth term
#include<iostream>
using namespace std;
int main()
{
	int n,sum,a,b;
	cout << "Enter the value of n: " << endl;
	cin >> n;
	a = -1;
	b = 1;
	cout << "fabbonaci seeries is: " << endl;
	for (int i=1; i<=n; i++)
	{
		sum = a+b;
		cout << " " << sum << endl;
		a=b;
		b=sum;
	}
	return 0;
}