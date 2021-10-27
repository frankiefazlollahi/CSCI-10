#include <iostream>
using namespace std;
void deleteRepeats(int array[], int& size);
void sort(int array[], int size);
int occurance(int array[], int size, int x);
int main()
{
  int arr[] = {-12,3,-12,4,1,1,-12,1,-1,1,2,3,4,2,3,-12};
  int arrCopy[] = {-12,3,-12,4,1,1,-12,1,-1,1,2,3,4,2,3,-12};
  int size = 16;
  sort(arr,size);
  deleteRepeats(arr,size);
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << " " << occurance(arrCopy, size, arr[i]) << endl;
  }
}
void deleteRepeats(int array[], int& size)
{
  int n = size;
  int start = 0;
  while(start != n)
  {
    int test = array[start];
    for(int i = start+1; i <= n;i++)
    {
      if(test==array[i])
      {
        for(int j = i;j<n;j++)
        {
          array[j] = array[j+1];
        }
        n-=1;
        start-=1;
      }
    }
    start +=1;
    }
  size = n;
}
void sort(int array[], int size)
{
  //sort in ascending order
  for(int i=0;i<10;i++)
  {
    for(int j=0;j<10;j++)
    {
      if(array[i]>array[j])
      {
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
      }
    }
  }
}
int occurance(int array[], int size, int x)
{
  int count = 1;
  for (int i = 0; i < size; i++)
  {
    if(array[i] == array[i+1])
    {
      count++;
    }
  }
  return count;
}
