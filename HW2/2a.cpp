#include <iostream>
#include <string>
using namespace std;
int main()
{
  for(int i = 1; i <= 5; i++)
  {
    for(int k =1 ; k <= i; k++)
    {
        cout << "o";
    }

    for(int j = 8-i; j >= 1; j--)
    {
      cout << "x";
    }
    cout << endl;
  }

  return 0;
}
