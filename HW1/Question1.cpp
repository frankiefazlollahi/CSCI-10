#include <iostream>
using namespace std;

int main()
{
double gallons;
cout << "Please enter the amount of gallons to be converted to liters. \n";
cin >> gallons;
double liters = gallons * 3.78541;
cout << gallons << " gallons converted to liters is " << liters;

return 0;
}
