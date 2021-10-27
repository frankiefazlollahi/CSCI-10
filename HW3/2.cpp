#include <iostream>
#include <cmath>
using namespace std;

void area(double s1, double s2, double s3, double& a, double& per);

int main()
{
  double area1 = 0;
  double perimeter = 0;
  double side1, side2, side3;
  cout << "Please enter the 3 sides of the triangle." << endl;
  cin >> side1;
  cin >> side2;
  cin >> side3;
  area(side1, side2, side3, area1, perimeter);

  return 0;
}
void area(double s1, double s2, double s3, double&a, double& per)
{
  per = s1 + s2 + s3;
  double semiperimeter = per / 2;
  a = sqrt(semiperimeter*(semiperimeter - s1) * (semiperimeter - s2) * (semiperimeter - s3));
  if(a <= 0)
  {
    cout << "The values you entered for the sides of the triangle do not produce a valid triangle, please try again." << endl;
  }
  else
    cout << "The area of the triangle you produced is " << a << endl;
}
