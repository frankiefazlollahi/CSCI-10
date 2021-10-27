#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
#include <fstream>
using namespace std;
const int MAX_SIZE = 100;
void removeBegin(string arr[]);
void removeExtraSpaces(string arr[]);
void replaceDash(string arr[]);
void songsInArray(string arr[]);
void separateSongArtist(string fullList[], string songs[], string artists[]);
int main()
{
  string fullList[MAX_SIZE];
  string songs[MAX_SIZE];
  string artists[MAX_SIZE];

  songsInArray(fullList);
  removeBegin(fullList);
  removeExtraSpaces(fullList);
  replaceDash(fullList);
  separateSongArtist(fullList, songs, artists);
  cout << fullList << endl;
  cout << songs << endl;
  cout << artists << endl;

  return 0;
}

//PART A
void removeBegin(string arr[])
{
  for(int i = 0; i < MAX_SIZE; i++)
  {
    string str = arr[i];
    char a[str.length()];
    for(int i = 0; i < str.length(); i++)
    {
      a[i] = str[i];
    }
    for(int k = 0; k < strlen(a); k++)
    {
      if(isalpha(a[k]) == false)
      {
        for(int j = k; j < MAX_SIZE; j++)
        {
          a[j] = a[j+1];
        }
        k--;
      }
        else
          break;
    }
    arr[i] = a;
  }
}
//PART B
void removeExtraSpaces(string arr[])
{
  for(int i = 0; i < MAX_SIZE; i++)
  {
    string str = arr[i];
    char a[str.length()];
    for(int i = 0; i < str.length(); i++)
    {
      a[i] = str[i];
    }
    for(int k = 0; k < strlen(a); k++)
    {
      if(isspace(a[k]) && isspace(a[k+1]))
      {
        for(int j = k; j <MAX_SIZE; j++)
        {
          a[j] = a[j+1];
        }
        k--;
      }
    }
    arr[i] = a;
  }
}
//PART C
void replaceDash(string arr[])
{
  for(int i = 0; i < MAX_SIZE; i++)
  {
    string str = arr[i];
    char a[str.length()];
    for(int i = 0; i < str.length(); i++)
    {
      a[i] = str[i];
    }
    for(int k = 0; k < strlen(a); k++)
    {
      if(a[k] == '-')
      {
        if(isspace(a[k-1]) && isspace(a[k+1]))
        {
          break;
        }
        else
        {
          a[k] = ' ';
        }
      }
    }
    arr[i] = a;
  }
}

void songsInArray(string arr[])
{
  ifstream inputStream;
  inputStream.open("C:\\cygwin64\\home\\frank\\cslab\\HW5");
  for(int i = 0; !inputStream.eof(); i++)
  {
    getline(inputStream,arr[i]);
  }
}
void separateSongArtist(string fullList[], string songs[], string artists[])
{
  for(int i = 0; i < MAX_SIZE; i++)
  {
    string str = fullList[i];
    if(str[i+2] == '-')
    {
      songs[i] = str.substr(0,i+1);
      artists[i] = str.substr(i+4, MAX_SIZE);
    }
  }
}
