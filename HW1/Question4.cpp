#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a, b, c; //double is lower case.
b = 2; //to assign a value to a variable, you must have the variable on the left side of the = sign.
cout << "Enter length of hypotenuse" << endl;
cin >> c;
cout << "Enter length of a side" << endl; //the >> must be facing the other way for cout
cin >> a;
double intermediate = pow(c, 2)-pow(a, 2);
b = sqrt(intermediate);
cout << "Length of other side is:" << b << endl; //Need << in bewteen the string and variable "endl" and use instead of "endline"
return 0;
}
