//To find largest among three numbers
#include<iostream>
using namespace std;
int main()
{
	int A,B,C;
	cout << "Enter the value of A,B and C numbers: " << endl;
	cin >>A>>B>>C;
	if (A > B)
	{
		if (A > C)
		{
			cout << "A is greater";
		}
		else
		{
			cout << "C is greater";
		}
	}
	else
	{
		if (B > C)
		{
			cout << "B is greater";
		}
		else 
		{
			cout << "C is greater";
		}
	}
	return 0;
}