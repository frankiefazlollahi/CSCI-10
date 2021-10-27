#include <iostream>
#include <string>
using namespace std;
int main()
{
  double score;
  int counter = 0;
  double sum = 0;
  double highest, lowest;
  cout << "Enter the score of the quiz. \n" << "Enter -1 to find the average score of all the scores entered. \n";
  cin >> score;
  while (score > 30 || score == -1)
  {
    cout << "Please enter a valid score. (Max Score: 30) \n";
    cin >> score;
    highest = score;
    lowest = score;
  }
  while (score != -1 && score <= 30 )
  {
    sum = sum + score;
    counter++;
    cout << "Enter the score of the quiz. \n" << "Enter -1 to find the average score of all the scores entered. \n";
    cin >> score;
    while (score > 30)
    {
      cout << "Please enter a valid score. (Max Score: 30) \n";
      cin >> score;
      if (score <= 30)
      {
        break;
      }
    }
    if (score == -1)
    {
        break;
    }
    if(highest < score)
    {
      highest = score;
    }
    if(lowest > score && score != -1)
    {
      lowest = score;
    }
  }
  double average = sum / counter;
  cout << "The average score of all the quizes is: " << average << \n;
  cout << "The highest of all the scores is: " << highest << \n;
  cout << "The lowest of all the scores is: " << lowest << \n;

  return 0;
}
