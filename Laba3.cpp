#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
	
using namespace std;

int countNum( int i, int count, int size)
{
	if ( i == size )
	{
		return count;
	}
	else
		return count + countNum(i + 1 , count++, size);
}
int countNum2(char* Num, int i, int count2, size_t size)
{
	if (i == size )
	{
		return count2;
	}
	else if (Num[i] % 2 == 0)
		return count2 + countNum2 (Num[i], i + 1, count2++, size);
}


int main()
{
	setlocale(LC_ALL, "rus");

	string str;

	cout << "Введите число " << endl;
	getline(cin, str);

	char* Num = new char[str.length() + 1];
	strcpy(Num, str.c_str());

	cout << countNum (0, 0, str.length()) << endl;
	//cout << countNum2 (Num, 0, 0, strlen(Num)) << endl;


}

















/*void countnum(char* Num)
{
	int count2 = 0, count = 0;
	for (int i = 0; i < strlen(Num); i++)
	{
		if (isdigit(Num[i]) || Num[i] == '-' || Num[i] == '.')
		{
			if (Num[i] != '-' && Num[i] != '.')
			{
				if (Num[i] % 2 == 0) { count2++; count++; }
				else count++;
			}
		}
		else
		{
			error = true;
			cout << "Введены некорректные данные" << endl;
			break;
		}
	}
	if (error == false)
	{
		cout << count << endl;
		cout << count2 << endl;
	}
}
void countnum(char* Num,int count2,int count,int null)
{
	if (Num[null] % 2 == 0) { count2++; count++; }
	else count++;
	if (strlen(Num) <= null)
	{
		return countnum(Num, 0, 0, null + 1);
	}
	
}*/


