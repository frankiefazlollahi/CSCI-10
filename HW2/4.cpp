#include<iostream>
#include<cmath>
using namespace std;


void windChillIndex();
int main()
{
    windChillIndex();
  return 0;
}
void windChillIndex()
{
	double w,t,v;
    cout << "Please provide a tempeture in Celsius: \n";
	cin >> t;
	cout << "Please provide the wind speed: \n";
	cin >> v;
  if (t <= 10)
   {
				cout << "That is not valid input. Try again (Temperature must be <= 10) \n";
				main();
	 }
	 else
   {
	    w = (33 - (((10* sqrt(v) - v + 10.5)* (33 - t)) / 23.1));
      cout << "The Wind Chill Index in degrees Celsius is: " << w;
   }
}
