//to find simple interest
#include<iostream>
using namespace std;

float getsimpleinterest(float principleAmount, float interestRate, float year)
{
      float SI = (principleAmount * interestRate * year)/100;
     cout << "Simple Interest is: "<< SI << endl;
      return SI;
}
int main()
{
    getsimpleinterest(10000, 5.2, 2);

}

