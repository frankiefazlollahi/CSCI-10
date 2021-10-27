#include <iostream>
using namespace std;
void readNum(int number[], int &count);
void reverse(int number[], int count);
bool addNum(int num1[], int count1, int num2[], int count2,int result[], int &size);
void printNumber(int number[], int count);
const int MAX_SIZE = 20;
int main()
{
	int number1[MAX_SIZE];
	int number2[MAX_SIZE];
	int result[MAX_SIZE];
	int count1 = 0;
	int count2 = 0;
	int size = 0;
	cout << "Enter the first number:  " << endl;
	readNum(number1, count1);
  cout << "Enter the second number: " << endl;
	readNum(number2, count2);
  reverse(number1, count1);
	reverse(number2, count2);
  bool success = addNum(number1, count1, number2, count2, result, size);
  if(success)
	{
		printNumber(number1, count1);
		cout << " + ";
		printNumber(number2, count2);
		cout << " = ";
		printNumber(result, size);
		cout << endl;
	}
	else
	{
		cout << "integer overflow" << endl;
	}

	return 0;
}
void readNum(int number[], int &count)
{
	char c;
  cin.get(c);
	while (c != '\n' && count < MAX_SIZE)
	{
		number[count] = c - '0';
		count++;
    cin.get(c);
	}
}

void reverse(int number[], int count)
{
	int i = 0;
	int j = count - 1;
	while (i < j)
	{
		int temp = number[i];
		number[i] = number[j];
		number[j] = temp;
		i++;
		j--;
	}
}
bool addNum(int num1[], int count1, int num2[], int count2,int result[], int &size)
{
	int sum = 0;
	int carry = 0;
	int i = 0;
	int j = 0;
	while (i < count1 && j < count2 && size < MAX_SIZE)
	{
		sum = num1[i] + num2[j] + carry;
		if (sum > 9)
		{
			carry = sum / 10;
			sum = sum % 10;
		}
		else
		{
			carry = 0;
		}
		result[size] = sum;
		size++;
		i++;
		j++;
		if(carry != 0 && size == MAX_SIZE)
			return false;
	}
	while (i < count1 && size < MAX_SIZE)
	{
		sum = num1[i] + carry;
		if (sum > 9)
		{
			carry = sum / 10;
			sum = sum % 10;
		}
		else
		{
			carry = 0;
		}
		result[size] = sum;
		size++;
		i++;
		if(carry != 0 && size == MAX_SIZE)
			return false;
	}
	while (j < count2 && size < MAX_SIZE)
	{
		sum = num2[j] + carry;
		if (sum > 9)
		{
			carry = sum / 10;
			sum = sum % 10;
		}
		else
		{
			carry = 0;
		}
		result[size] = sum;
		size++;
		j++;
		if(carry != 0 && size == MAX_SIZE)
			return false;
	}
	if (carry > 0)
	{
		result[size] = carry;
		size++;
	}
	return true;
}
void printNumber(int number[], int count)
{
	for (int i = count - 1; i >= 0; i--)
	{
		cout << number[i];
	}
}
