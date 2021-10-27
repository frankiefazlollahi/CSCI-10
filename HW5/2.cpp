#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 101;
void cap(char p[]);
void deleteSpaces(char p[], int &size);
void lower(char p[]);
int main()
{
    char phrase[MAX];
    int size;
    cout << "Enter phrase: ";
    cin.getline(phrase, MAX);
    cap(phrase);
    lower(phrase);
    deleteSpaces(phrase, size);

    return 0;
}
void cap(char p[])
{
     if (p[0] != ' ')
     {
        p[0] = toupper(p[0]);
    }
}
void deleteSpaces(char p[], int &size)
{
     bool found = false;
     for (int i = 0; i < strlen(p); i++)
     {
            if (p[i] != ' ')
            {
                cout << p[i];
                found = false;
            }
            if(p[i] == ' ' && found == false)
            {
                found = true;
                cout << " ";
            }
     }
}
void lower(char p[])
{
     for (int i = 1; i < strlen(p); i++)
     {
         p[i] = tolower(p[i]);
     }
}
