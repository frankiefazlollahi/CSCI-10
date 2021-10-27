#include <iostream>
using namespace std;

int main()
{

  return 0;
}
double convertToMPH(int min, int sec)
{
  int totalSec = sec + min * 60;

}

#include <iostream>
using namespace std;

double convertToMPH(int paceInMin, int paceInSec);
double convertToMPH(double kph);
int main()
{
	int min;
	int sec;
	double kph;
	double total;
  char time;
  cout << "Please enter either the letter M or K for what value your treadmill records in (Minutes and Seconds OR KPH)" << endl;
  cin >> time;
  switch (time)
  {
    case 'M':
    case 'm':
    cout << "Please enter an integer to represent your pace in minutes: " << endl;
  	cin >> min;
  	cout << "Please enter an integer to represent your pace in seconds: " << endl;
  	cin >> sec;
    total = convertToMPH(min, sec);
    cout << "Your speed is " << total << " miles per hour." << endl;
    break;
    case 'K':
    case 'k':
    cout << "Please enter your speed in Kilometers per Hour: " << endl;
  	cin >> kph;
  	total = convertToMPH(kph);
  	cout << "Your speed in mph is " << total << endl;
    break;
    default:
    cout << "You did not enter a valid letter (M OR K)." << endl;
  }

	return 0;
}

double convertToMPH(int paceInMin, int paceInSec)
{
    return(60 / (paceInMin + paceInSec / 60.));
};
double convertToMPH(double kph)
{
	return (kph / 1.61); //1 mile = 1.61 km
};
