// C++ program to demonstrate the use of if statement
#include<iostream>
using namespace std;

int main() {
    int budget;
    cout << "Enter your budget: ";
    cin >> budget;
   if(budget  >= 10000)
    {
        cout << "You have a good budget!" << endl;
    }
    return 0;
}