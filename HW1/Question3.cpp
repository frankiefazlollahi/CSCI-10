#include <iostream>
using namespace std;

int main()
{
  double weight, kWeight;
  int mets, min;
  cout << "Please enter your weight in pounds. \n";
  cin >> weight;
  kWeight = weight / 2.2;
  cout << "Please enter the total amout of METS for your activity. \n";
  cin >> mets;
  cout << "Enter how many minutes you spent doing this activity. \n";
  cin >> min;
  double calPerMin = .0175 * kWeight * mets;
  double totalCal = calPerMin * min;
  cout << "The amount of calories you burned from the activity is approximately " << totalCal << " calories";

  return 0;
}
