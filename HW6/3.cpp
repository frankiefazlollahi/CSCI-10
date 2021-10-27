#include <iostream>
#include <fstream>

using namespace std;
const int SIZE = 12; //12 lines in the list of numbers files
void filesToArrays(ifstream& f1, ifstream& f2, int a1[], int a2[]);
void mergeAndSort(int a1[], int a2[], int aCombined[]);
void toOutputFile(ofstream& output, int aCombined[]);
int main()
{
  int arr1[SIZE];
  int arr2[SIZE];
  int combinedList[SIZE * 2];
  ifstream file1;
  file1.open("numberList1.txt");
  if(file1.fail())
  {
    cout << "numberList1.txt failed to open." << endl;
    exit(1);
  }
  ifstream file2;
  file1.open("numberList2.txt");
  if(file2.fail())
  {
    cout << "numberList2.txt failed to open." << endl;
    exit(1);
  }
  ofstream output;
  output.open("output.txt");
  if(output.fail())
  {
    cout << "output.txt failed to open." << endl;
    exit(1);
  }
  filesToArrays(file1, file2, arr1, arr2);
  file1.close();
  file2.close();
  cout << "Array 1: " << endl;
  for(int i = 0; i < SIZE; i++)
  {
    cout << arr1[i] << " ";
  }
  cout << endl;
  cout << "Array 2:" << endl;
  for(int i = 0; i < SIZE; i++)
  {
    cout << arr2[i] << " ";
  }
  cout << endl;

  mergeAndSort(arr1, arr2, combinedList);
  cout << "Combined & Sorted Array: " << endl;
  for(int i = 0; i < (SIZE * 2); i++)
  {
    cout << combinedList[i] << " ";
  }
  toOutputFile(output, combinedList);
  output.close();

  return 0;
}
//put the numbers from the files into their own arrays
void filesToArrays(ifstream& f1, ifstream& f2, int a1[], int a2[])
{
  //int i = 0;
  for(int i = 0; !f1.eof(); i++)
  {
    f1 >> a1[i];
    //i++;
  }
  int j = 0;
  while(f2 >> a2[j])
  {
    
    j++;
  }
}
//take the two arrays and sort them into a new combined and sorted array
void mergeAndSort(int a1[], int a2[], int aCombined[])
{
  int i = 0;
  int j = 0;
  int k = 0;
  while (i < SIZE && j < SIZE)
  {
    if(a1[i] < a2[j])
    {
      aCombined[k] = a1[i];
      k++;
      i++;
    }
    else
    {
      aCombined[k] = a2[j];
      k++;
      j++;
    }
  }
  while (i < SIZE)
  {
    aCombined[k] = a1[i];
    k++;
    i++;
  }
  while (j < SIZE)
  {
    aCombined[k] = a2[j];
    k++;
    j++;
  }
}
//put new array into output file
void toOutputFile(ofstream& output, int aCombined[])
{
  for(int i = 0; i < (SIZE * 2); i++)
  {
    output << aCombined[i] << endl;
  }
}
/*
Write a program that merges the numbers in two files and writes all the
numbers into a third file. Your program takes input from two diﬀerent files and writes
its output to a third file. Each input file contains a list of numbers of type int in sorted
order from the smallest to the largest. After the program is run, the output file will
contain all the numbers in the two input files in one longer list in sorted order from
smallest to largest. Your program should deﬁne a function that is called with the two
input-file streams and the output-file stream as three arguments.
*/
