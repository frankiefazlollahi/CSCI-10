#include <iostream>
using namespace std;
int main()
{
  for (int i = 10; i <= 18; i+=2)
  {
    for (int j = 5; j >= 1; j--)
    {
      cout << i << " " << j << ", ";
    }
    cout << endl;
  }

  return 0;
}
