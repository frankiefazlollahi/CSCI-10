#include <iostream>
using namespace std;

int main()
{
  double mSweetener, mWeight, goalWeight;
  const double PERCENT = .0001;
  double limit;
  cout << "Please enter the amount of artificial sweetner to kill a mouse. \n";
  cin >> mSweetener;
  cout << "Enter the weight of that mouse. \n";
  cin >> mWeight;
  cout <<"Enter the weight you will stop your diet at. \n";
  cin >> goalWeight;
  limit = (mSweetener * goalWeight)/(PERCENT * mWeight);
  cout << "It is safe to consume diet soda that does not exceed " << limit << " of artificial sweetener at your goal weight.";

  return 0;
}
