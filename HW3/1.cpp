#include <iostream>
using namespace std;

void getInput(int& h, int& m);
void conversion(char& time, int& hour);
void display(int h, int m, char t);

int main()
{
  int hour = 0;
  int min = 0;
  char time = 'A';
  getInput(hour,min);
  conversion(time,hour);
  display(hour, min, time);

  return 0;
}

void getInput(int& h, int& m)
{
  cout << "Please enter the hour value of the time you want to convert from 24-hour notation to 12-hour notation." << endl;
  cin >> h;

  cout << "Please enter the minutes value of the time." << endl;
  cin >> m;

}
void conversion(char& time, int& hour)
{
  if(hour >= 12)
  {
    time = 'p';
    hour = hour - 12;
  }

}
void display(int h, int m, char t)
{
  cout <<"The converted time in 12-Hour notation is " << h << ":" << min << time << endl;
}
