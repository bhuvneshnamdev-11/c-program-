//function: SIP calculator
#include<iostream>
#include<cmath>
using namespace std;
float SIPcalculator(float monthlyinvestment, float rateofinterest, float year)
{
    float n = year * 12; // total number of months
    float r = rateofinterest / (12 * 100); // monthly interest rate
    float SIP = monthlyinvestment * ((pow(1 + r, n) - 1) / r) * (1 + r);
    return SIP;
}
int main()
{
    float monthlyinvestment, rateofinterest, year, maturityamount;
    cout << "Enter monthly investment: ";
    cin >> monthlyinvestment;
    cout << "Enter rate of interest: ";
    cin >> rateofinterest;
    cout << "Enter time(year): ";
    cin >> year;
    maturityamount = SIPcalculator(monthlyinvestment, rateofinterest, year);
    cout << "Maturity amount is: " << maturityamount << endl;
    return 0;
}
