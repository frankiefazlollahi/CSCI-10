#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void calculate(ifstream&, ofstream&);
int main()
{
  ifstream in;
  in.open("studentQuizScores.txt");
  if(in.fail())
  {
    cout<<"Input file failed.";
    exit(1);
  }
  ofstream out;
  out.open("StudentQuizOutput.txt");
  if(out.fail())
  {
    cout << "Output file failed.";
    exit(1);
  }
  calculate(in,out);
  out.close();
  in.close();
  return 0;
}

void calculate(ifstream& in, ofstream& out)
{
  int i, sum;
  int arr[10];
  string first, last;
  double avg;
  in >> last;
  while(in)
  {
    sum = 0;
    in >> first;
    for(i = 0; i < 10; i++)
    {
      in >> arr[i];
      sum += arr[i];
    }
    out << last << " " << first << " ";
    for(i = 0; i < 10; i++)
    {
      out << arr[i] << " ";
    }
    avg = sum / 10.0;
    out << avg << endl;
    in >> last;
  }
}
/*
Write a program to compute numeric grades for a
course. The course records are in a file that will serve as the input
file. The input file is in exactly the following format: Each line
contains a student's last name, then on espace, then the student's
first name, then one space, then ten quiz scores all on one line. The
quiz scores are whole numbers and are separated by one space. Your
program will take its input from this file and send its output to a second
file. The data in the output file will be the same as the data in
the input file except that there will be one additional number ( of type
double ) at the end of each line. This number will be the average of
the student's ten quiz scores. If this is being done as a class
assignment, obtain the file names from your instructor. Use at least
one function that has file streams as all or some of its arguments.
*/

/*#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <string>
using namespace std;

void average(double avg[], string arr[]);
void toOutput(string array[], ofstream& output, double avg[]);

int main()
{
  string array[20];
  double avg[20];
  ifstream input;
  input.open("studentQuizScores.txt");
  if(input.fail())
  {
    cout << "input failed" << endl;
    exit(1);
  }
  int i = 0;
  while(input >> array[i])
  {
    i++;
  }
  average(avg, array);
  while(input >> array[i])
  {
    i++;
  }
  ofstream output;
  output.open("StudentQuizOutput.txt");
  if(output.fail())
  {
    cout << "output failed" << endl;
    exit(1);
  }
  toOutput(array, output, avg);
  output.close();
  return 0;
}
void average(double avg[], string arr[])
{
  stringstream ss;
  string first, last;
  int score;
  int total = 0, count = 0, average = 0;
  for(int i = 0; i < 20; i++)
  {
    ss << arr[i];
    ss >> last;
    ss >> first;
    while(ss >> score)
    {
      count++;
      total += score;
    }
    if(count > 0)
    {
      average = total / count;
    }
    avg[i] = average;
  }
}
void toOutput(string arr[], ofstream& output, double avg[])
{
  for(int i = 0; i < 20; i++)
  {
    output << arr[i] << " " << avg[i] << endl;
  }
}*/
