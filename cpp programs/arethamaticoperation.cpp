//To perform simple arethamatic operations
#include<iostream>
using namespace std;
int main (){
	char operation;
	int a,b;
	cout << "Enter the value of a and b: " << endl;
	cin >> a >> b;
	cout << "Enter your choice (+,-,*,/,%): ";
	cin >> operation;
	switch (operation){
		case '+': 
			cout << "Additon of number is: " << a+b;
			break;
		case '-':
			cout << "Substraction of number is: " << a-b;
			break;
		case '*':
			cout << "multipication of number is: " << a*b;
			break;
		case '/':
			cout << "Division of number is: " << a/b;
			break;
		case '%':
			cout << "Modulus of number is: " << a%b;
			break;
	}	
	return 0;
}