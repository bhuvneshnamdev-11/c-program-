//To add two matrix
#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],sum[3][3];
	cout << "Enter the value of matrix a: " << endl;
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "Enter the value of matrix b: " << endl;
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			cin >> b[i][j];
		}
	}
	//sum of matrix
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	} 
	cout << "sum of matrix a and b is: " << endl;
	for (int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout << sum[i][j] << " ";
		}
	}
	return 0;
}