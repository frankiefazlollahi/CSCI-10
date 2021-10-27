#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void calculate(ifstream&, ofstream&);
int main()
{
  ifstream in;
  in.open("input2.txt");
  if(in.fail())
  {
    cout<<"Input file failed.";
    exit(1);
  }
  ofstream out;
  out.open("output2.txt");
  if(out.fail())
  {
    cout << "Output file failed.";
    exit(1);
  }
  out << "This is a list of students, their quiz scores, and their average quiz score." << endl;
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
    out << last << " " << first << endl;
    for(i = 0; i < 10; i++)
    {
      out << arr[i] << " ";
    }
    out << endl;
    out << "Average Quiz Score: ";
    avg = sum / 10.0;
    out << avg << endl;
    in >> last;
  }
}

/*
int main()
{
  ifstream in;
  in.open("input2.txt");
  ofstream out;
  out.open("output2.txt");
  string last, first;
  int words = 0;
  int total = 0;
  int temp = 0;
  double avg;
  while(!in.eof())
  {
    in >> last >> first;
    out << last << " " << first;
    while(!in.eof())
    {
      in >> temp;
      if(isdigit(temp))
      {
        total+= temp;
        out << " " << temp;
      }
      else
      {
        out << endl;
        break;
      }
    }
  }
  avg = total / 10.0;
  total = 0;
  last = "";
  first = "";
  if(!in.eof())
  {
    out << " " << avg << endl;
  }
  in.close();
  out.close();
  return 0;
}
*/
