#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int wordCount(char l[]);
int occurance(char copy[], char x);
void deleteRepeats(char l[]);
void deleteSpaces(char l[]);
void lower(char l[]);
int main()
{

  char line[1000];
  cout << "Enter a string:  ";
  cin.getline(line, 1000);
  char copy[1000];
  for(int i = 0; i < strlen(line); i++)
  {
      copy[i] = line[i];
  }
  lower(copy);
  cout << wordCount(line) << " Words" << endl;
  deleteSpaces(line);
  lower(line);
  deleteRepeats(line);
  for(int i = 0; i < strlen(line); i++)
  {
    if(isalpha(line[i]))
    {
      cout << occurance(copy, line[i]) << " " << line[i] << endl;
    }
  }
  return 0;
}
int wordCount(char l[])
{
  int x = 0;
  for (int i = 0; i < strlen(l); i++)
  {
    if (isspace(l[i]) || l[i + 1] == '\0')
      x++;
  }
  return x;
}
int occurance(char copy[], char x)
{
  int count = 0;
  for (int i = 0; i < strlen(copy); i++)
  {
    if(x == copy[i])
    {
      count++;
    }
  }
  return count;
}
void deleteRepeats(char l[])
{
  int n = strlen(l);
  int start = 0;
  while(start != n)
  {
    char test = l[start];
    for(int i = start+1; i <= n;i++)
    {
      if(test==l[i])
      {
        for(int j = i;j<n;j++)
        {
          l[j] = l[j+1];
        }
        n-=1;
        start-=1;
      }
    }
    start +=1;
  }
}
void deleteSpaces(char l[])
{
  int n = strlen(l);
  int start = 0;
  while (start != n)
  {
    for(int i = start; i <= n; i++)
    {
      if(isspace(l[i]))
      {
        for(int j = i; j < n; j++)
        {
          l[j] = l[j+1];
        }
        n-=1;
        start-=1;
      }
    }
    start += 1;
  }
}
void lower(char l[])
{
  for(int i = 0; i < strlen(l); i++)
  {
    if(isalpha(l[i]))
    {
      l[i] = tolower(l[i]);
    }
  }
}
