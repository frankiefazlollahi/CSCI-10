#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
#include <cstring>
using namespace std;
double calc(ifstream& in);
int main()
{
  ifstream in;
  in.open("input3.txt");
  double num;
  num = calc(in);
  cout << "Average word size of the file is " << num;
  in.close();

  return 0;
}
double calc(ifstream& in)
{
  string words[100];
  int wordSize[100];
  int count = 0;
  int sum = 0;
  while (in >> words[count])
  {
    count++;
  }
  for(int i = 0; i < 100; i++)
  {
    int a = words[i].length();
    int j = 0;
    char cstring[a];
    strcpy(cstring, words[i].c_str());
    for(int k = 0; k < a; k++)
    {
      if(isalpha(cstring[k]) == false)
      {
        j++;
      }
    }
    wordSize[i] = a - j;
  }
  for(int i = 0; i < 100; i++)
  {
    sum += wordSize[i];
  }
  double avgWord = (sum * 1.0)/count;
  return avgWord;
}
/*Write a program that will compute average word length (average number of characters per word)
for a file that contains some text. A word is defined to be any string of symbols that is preceded
and followed by one of the following at each end: a blank, a comma, a period, the beginning of a line,
or the end of a line. Your program should define a function that is called the input-file
 stream as an argument.*/
