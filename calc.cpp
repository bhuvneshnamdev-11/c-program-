 //To perform simple arthmetic operations or a simple caluculator 
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char operation;
	cout << "Enter the operation (+,-,/,*,%): " << endl;
	cin >> operation;
	cout << "Enter the value of a and b: " << endl;
	cin >> a >> b;
	switch (operation)
	{
		
		case '+':
			cout << "result = " << a+b;
			break;
		
		case '-':
			cout << "result = " << a-b;
			break;
			
		case '*':
			cout << "result = " << a*b;
			break;
		
		case '/':
			cout << "result = " << a/b;
			break;
			
		case '%':
			cout << "result = " << a%b;
			break;
			
		default:
			cout << "Invalid option!";
			break;
	}
	return 0;
}