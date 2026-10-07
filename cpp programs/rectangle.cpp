//TO find area and parameter of rectangle
#include<iostream>
using namespace std;
int main()
{
	int length, breadth,Area,Perimeter;
	cout << "Enter the value of length: " << endl;
	cin >> length;
	cout << "Enter the value of breadth: " << endl;
	cin >> breadth;
	Area = length * breadth;
	Perimeter = 2*(length * breadth);
	cout << "Area = " << Area << endl;
	cout << "Perimeter = " << Perimeter << endl;
	return 0;
}