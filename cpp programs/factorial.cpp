//To find factorial of a given nimber 
#include <iostream>
using namespace std;
int main()
{
	int n,f=1;
	cout << "Enter the value of n: " << endl;
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		f=f*i;
	}
	cout << "fatorial of a number is: " << f;
	return 0;
}