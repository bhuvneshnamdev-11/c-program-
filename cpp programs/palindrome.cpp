//To check weather the number is palindrome or not 
#include<iostream>
using namespace std;
int main()
{
	int n,digit,original,reverse=0;
	cout << "Enter the value of n: " << endl;
	cin >> n;
	original = n;
	while (n > 0)
	{
		digit = n % 10;
		reverse = reverse * 10 + digit;
		n = n/10;
	}
	if (original == reverse)
	{
		cout << "number is palindrome" << endl;
	}
	else 
	{
		cout << "number is not palindrome" << endl;
	}
	return 0;
}