//To check weather the number is armstrong or not
#include<iostream>
using namespace std;
int main()
{
	int n,digit,original,sum=0;
	cout << "Enter the value of n: " << endl;
	cin >> n;
	original = n;
	while (n > 0)
	{ 
		digit = n % 10;
		sum = sum + digit * digit * digit;
		n = n / 10;
	}
	if (original == sum)
	{
		cout << "Number is armstrong" << endl;
	}
	else 
	{
		cout << "Number is not armstrong" << endl;
	}
	return 0;
}
