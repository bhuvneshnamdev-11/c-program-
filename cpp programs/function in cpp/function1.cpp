//function: to calculate simple interest 
#include<iostream>
using namespace std;
float simpleinterest(float principle, float rateofinterest, float year)
{
    float SI= (principle * rateofinterest * year)/100;
    return SI;
      
}

int main()
{
      float principle, rateofinterest, year, interest;
      cout << "Enter principle amount: ";
      cin >> principle;
      cout << "Enter rate of interest: " << endl;
      cin >> rateofinterest;
      cout << "Enter time(year): "<< endl;
      cin >> year;
      interest = simpleinterest(principle, rateofinterest, year);
      cout << "simple interest is: " << interest << endl;
      float totalamount = principle + interest;
      cout << "Total amount is: " << totalamount << endl;
      return 0;
    
}