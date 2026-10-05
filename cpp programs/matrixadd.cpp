//To add two matrix
#include<iostream>
using namespace std;
int main()
{
	int a[2][2],b[2][2],sum[2][2];
	cout << "Enter the value of matrix a: " << endl;
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "Enter the value of matrix b: " << endl;
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			cin >> b[i][j];
		}
	}
	//sum of matrix
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	} 
	cout << "sum of matrix a and b is: " << endl;
	for (int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout << sum[i][j] << " ";
		}
	}
	return 0;
}