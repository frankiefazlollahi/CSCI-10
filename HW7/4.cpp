#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
void replaceError(string l[]);
int main()
{
  ifstream in;
  in.open("input4.txt");
  ofstream out;
  out.open("output4.txt");

  string temp, trash;
  while (in >> temp)
  {
    if(temp == "cout")
    {
      out << temp <<" << ";
      in >> temp;
      if(temp.at(temp.length()-1) == ';')
      {
        out << temp << endl;
      }
    }
    else if(temp == "cin")
    {
      out << temp << " >> ";
      in >> temp;
      if(temp.at(temp.length()-1) == ';')
      {
        out << temp << endl;
      }
    }
    else
    {
      out << temp;
    }
  }
  in.close();
  out.close();
  return 0;
}
