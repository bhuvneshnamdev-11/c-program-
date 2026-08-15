//do while loop : to print number from 1 to 5
#include<iostream>
using namespace std;
int main()
{
    // int i=1;
    // do {
    // cout << " " << i << endl;
    // i++;
    // } while (i<=5);

//in do while loop, the condition is checked after the execution of the loop body, 
//so the loop will always execute at least once, even if the condition is false.

    //  int i=21;
    // do {
    //     cout << " " << i << endl;
    //     i++;
    // } while (i<=5);

    int i=1;
    if(cin >> i) {
       cout << "You entered: " << i << endl;
    }

    return 0;
} 
