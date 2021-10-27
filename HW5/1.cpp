#include <iostream>
#include <string>

using namespace std;

bool checkTie();
bool checkWin();
void changeValueX(int y);
void changeValueO(int y);
void displayBoard();
string square[9] = {"1","2","3","4","5","6","7","8","9"};

int main()
{
  int input;
  while (checkWin() == false)
  {
    displayBoard();
    cout << "Enter your move Player X: " << endl;
    cin >> input;
    cout << endl;
    input -= 1;
    changeValueX(input);
    if (checkWin() == false && checkTie() == false)
    {
        displayBoard();
        cout << "Enter your move Player O: " << endl;
        cin >> input;
        cout << endl;
        input -= 1;
        changeValueO(input);
        if (checkWin() == true)
        {
            cout << "The winner is Player O!" << endl;
        }
    }
    else if (checkWin() == true)
        {
            cout << "The winner is Player X!" << endl;
        }
    else if (checkTie() == true)
    {
        cout << "It's a tie :(" << endl;
    }
  }

  return 0;
}
void displayBoard()
{
    for (int i = 0; i < 3; i++)
    {
        cout << square[i] << " ";
    }
    cout << endl;
    for (int i = 3; i < 6; i++)
    {
        cout << square[i] << " ";
    }
    cout << endl;
    for (int i = 6; i< 9; i++)
    {
        cout << square[i] << " ";
    }
    cout << endl;
}
void changeValueX(int x)
{
    for (int i = 0; i < 9; i++)
    {
        if (i == x)
        {
            square[i] = "X";
        }
    }
}
void changeValueO(int x)
{
    for (int i = 0; i< 9; i++)
    {
        if (i == x)
        {
            square[i] = "O";
        }
    }
}
bool checkWin()
{
    if(square[0]==square[1]&&square[1]==square[2])
    {
        return true;
    }
    else if(square[3]==square[4]&&square[4]==square[5])
    {
        return true;
    }
    else if(square[6]==square[7]&&square[7]==square[8])
    {
        return true;
    }
    else if(square[0]==square[3]&&square[3]==square[6])
    {
        return true;
    }
    else if(square[1]==square[4]&&square[4]==square[7])
    {
        return true;
    }
    else if(square[2]==square[5]&&square[5]==square[8])
    {
        return true;
    }
    else if(square[2]==square[4]&&square[4]==square[6])
    {
        return true;
    }
    else if(square[0]==square[4]&&square[4]==square[8])
    {
        return true;
    }
    else
    {
      return false;
    }
}
bool checkTie()
{
    int x = 0;
    for(int i = 0; i < 9; i++)
    {
        if(square[i]!="1" && square[i] !="2" && square[i]!="3"&&square[i]!="4"&&square[i]!="5"&&square[i]!="6"&&square[i]!="7"&&square[i]!="8"&&square[i]!="9")
        {
            x += 1;
        }
        else
        {
            return false;
        }
    }
    if(x == 9)
    {
        return true;
    }
}
