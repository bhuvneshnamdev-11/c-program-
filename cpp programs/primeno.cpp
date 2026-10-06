//TO check weather the number is prime or not
#include<iostream>
using namespace std;

int main()
{
    int n;
	
    cout << "Enter a number: ";
    cin >> n;
	bool prime = true;
    if(n <= 1)
    {
        prime = false;
    }
    else
    {
        for(int i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                prime = false;
                break;
            }
        }
    }

    if(prime)
        cout << "The number is Prime";
    else
        cout << "The number is Not Prime";

    return 0;
}