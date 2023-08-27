#include <iostream>
# include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus"); 
	srand(time(0));
	double ArraySize;
	int flag, Stop;
	cout << "Введите размер массива \n";
	cin >> ArraySize;
	if (cin && double(ArraySize) == unsigned int(ArraySize) && double(ArraySize)!=0)
	{
		int *Array = new int[ArraySize];

		for (int i = 0; i < ArraySize; i++)
		{
			*(Array + i) = 5 - rand() % 10;
			while (*(Array + i) == 0)
			{
				*(Array + i) = 5 - rand() % 10;
			}
		}
		for (int i = 0, j = 1; i < ArraySize; i++, j++)
		{
			if ((*(Array + i) > 0 && *(Array + j) < 0) || (*(Array + i) < 0 && *(Array + j) > 0))
			{
				flag = 0;
			}
			else
			{
				Stop = *(Array + j);
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			cout << "\t" << flag << endl;
		}
		else if (flag == 1)
		{
			cout << "\t" << Stop << endl;
		}
		cout << "Массив" << endl;
		for (int i = 0; i < ArraySize; i++)
		{
			cout << *(Array + i) << endl;
		}
		
		delete[] Array;
	}
	else
		cout << "Введены некорректные значения ";
}