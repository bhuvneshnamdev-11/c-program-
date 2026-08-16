//function 
#include <iostream>
using namespace std;

//no argument and no return type
void printhelloworld()
{
    cout << "Hello, World!" << endl;
}

//with arrgument and no return type
void printnumber(int num)
{
    cout << "The number is: " << num << endl;
}

//with arrgument and return type
int getmultiplication(int a, int b)
{
    return a * b;
}

int main()
{
    printhelloworld();
    printnumber(5);
    int result = getmultiplication(4, 6);
    cout << "The multiplication is: " << result << endl;
    return 0;
} 