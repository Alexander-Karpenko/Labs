#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));

	double ArraySize;

	cout << "Введите размер массива \n";
	cin >> ArraySize;
	if (cin && double(ArraySize) == unsigned int(ArraySize))
	{
		int n = 0, Sum = 0;
		bool flag = false;
		
		int *Array = new int[ArraySize];

		for (int i = 0; i < ArraySize; i++)
		{
			*(Array + i) = 5 - rand() % 10;
		}
		for (int i = 0; i < ArraySize; i++)
		{
			if (*(Array + i) == 0)
			{
				n = i;
				flag = true;
				break;
			}
			
		}
		if (flag == true)
		{
			for (n; n < ArraySize; n++)
			{
				Sum += abs(*(Array + n));
			}

		cout << "Сумма по модулю после 0 равна " << Sum << endl;
		}
		
		cout << "Массив" << endl;

		for (int i = 0; i < ArraySize; i++)
		{
			cout << *(Array + i) << endl;
		}

		delete[] Array;
	}

}