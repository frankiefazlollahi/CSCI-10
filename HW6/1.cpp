#include <iostream>

using namespace std;

struct studentRecord
{
  double quiz1; //10 points, 25%
  double quiz2;
  double midterm; //100 points, 25%
  double final; //100 points, 50%
};
double calcGrade(double q1, double q2, double mid, double fin);

int main()
{
  studentRecord student;
  double grade;
  double q1,q2,mid,fin;
  cout << "Enter the score of the first quiz." << endl;
  cin >> student.quiz1;
  q1 = student.quiz1;
  cout << "Enter the score of the second quiz." << endl;
  cin >> student.quiz2;
  q2 = student.quiz2;
  cout << "Enter the score of the midterm." << endl;
  cin >> student.midterm;
  mid = student.midterm;
  cout << "Enter the score of the final." << endl;
  cin >> student.final;
  fin = student.final;

  grade = calcGrade(q1,q2,mid,fin);

  if(grade >= 90)
  {
    cout << "The grade of the student is an A." << endl;
  }
  else if(grade < 90 && grade >= 80)
  {
    cout << "The grade of the student is a B." << endl;
  }
  else if( grade < 80 && grade >= 70)
  {
    cout << "The grade of the student is a C." << endl;
  }
  else if(grade < 70 && grade >= 60)
  {
    cout << "The grade of the student is a D." << endl;
  }
  else
  {
    cout << "The grade of the student is a F." << endl;
  }

  return 0;
}

double calcGrade(double q1, double q2, double mid, double fin)
{
  double quizPercent, midPercent, finalPercent;
  quizPercent = ((q1 + q2)/20) * 25;
  midPercent = (mid/100) * 25;
  finalPercent = (fin/100) * 50;
  return (quizPercent + midPercent + finalPercent);
}
