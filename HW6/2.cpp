#include <iostream>

using namespace std;
struct Fraction
{
  int numerator;
  int denominator;
};
void printFraction(Fraction f);
Fraction mult(Fraction f1, Fraction f2);
Fraction add(Fraction f1, Fraction f2);
int main()
{
  Fraction f1;
  cin >> f1.numerator;
  cin >> f1.denominator;
  Fraction f2;
  cin >> f2.numerator;
  cin >> f2.denominator;
  printFraction(f1);
  cout << endl;
  printFraction(f2);
  cout << endl;
  cout << mult(f1,f2).numerator << "/" << mult(f1,f2).denominator;
  cout << endl;
  cout << add(f1,f2).numerator << "/" << add(f1,f2).denominator;

  return 0;
}
void printFraction(Fraction f)
{
  cout << f.numerator << "/" << f.denominator;
}
Fraction mult(Fraction f1, Fraction f2)
{
  Fraction f;
  f.numerator = f1.numerator * f2.numerator;
  f.denominator = f1.denominator * f2.denominator;
  return f;
}
Fraction add(Fraction f1, Fraction f2)
{
  Fraction f;
  f.numerator = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);
  f.denominator = f1.denominator * f2.denominator;
  return f;
}
