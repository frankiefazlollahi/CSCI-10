#include <iostream>
#include <string>
using namespace std;
int main()
{
  double score;
  int counter = 0;
  double sum = 0;
  cout << "Enter the score of the quiz. \n" << "Enter -1 to find the average score of all the scores entered. \n";
  cin >> score;
  while (score > 30 || score == -1)
  {
    cout << "Please enter a valid score. (Max Score: 30) \n";
    cin >> score;
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
  }
  double average = sum / counter;
  cout << "The average score of all the quizes is: " << average;

  return 0;
}
