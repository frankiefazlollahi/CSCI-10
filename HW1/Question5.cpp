#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int day;
  cout << "Please enter the number for the day of the week. \n" << "Monday: 1, Tuesday: 2, Wednesday: 3, Thursday: 4, Friday: 5 \n";
  cin >> day;
  switch (day)
  {
    case 1:
      cout << "Monday: CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45 \n";
      break;
    case 2:
      cout << "Tuesday: PHYS 2 at 12:10, CSCI 10 lab at 2:15 \n";
      break;
    case 3:
      cout << "Wednesday: CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45 \n";
      break;
    case 4:
      cout << "Thursday: PHYS 2 at 12:10 \n";
      break;
    case 5:
    cout << "Friday: CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45 \n";
    break;
    default:
    cout << "Please enter a valid day of the week (Monday: 1, Tuesday: 2, Wednesday: 3, Thursday: 4, Friday: 5) \n";
  }
  return 0;
}
