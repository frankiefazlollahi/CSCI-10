#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n;
  double max = 0;
  double min = 31;
  double sum = 0;
  cout << "How many scores do you want to enter?" << endl;
  cin >> n;
  while(n < 0)
  {
    cout << "You cannot enter a negative amount of scores. Try again." << endl;
    cin >> n;
  }
  double scoreList[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Enter a score." << endl;
    cin >> scoreList[i];
    while (scoreList[i] > 30 || scoreList[i] < 0)
    {
      cout << "Please enter a valid score. (Max Score: 30) \n";
      cin >> scoreList[i];
    }
    if(scoreList[i] > max)
    {
      max = scoreList[i];
    }
    if(scoreList[i] < min)
    {
      min = scoreList[i];
    }
    sum += scoreList[i];
  }
  double average = sum / n;
  cout << "The average score of all the quizes is: " << average << endl;
  cout << "The highest of all the scores is: " << max << endl;
  cout << "The lowest of all the scores is: " << min << endl;

  return 0;
}
