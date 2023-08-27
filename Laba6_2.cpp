#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

bool comp(double a, double b)
{
	return  abs(a) > abs(b);
}

int main()
{
	setlocale(LC_ALL, "rus");
	double A = 0, B = 0, num = 0, Sum = 0;
	double n;
	cout << "Введите кол-во элементов массива\n";
	cin >> n;
	if (cin && n > 0 )
	{
		vector <double> array(n);
		for (int i = 0; i <= n - 1; i++)
		{
			cout << "Введите " << i + 1 << " элемент массива" << endl;
			cin >> array[i];
			if (cin ) { }
			else
			{
				cout << "Введены некорректные значения элемента массива" << endl;
				break;
			}
		}
			double amount = 0, max = 0;
			cout << "Задайте диапазон- от ";
			cin >> A;
			cout << " до ";
			cin >> B;
			cout << endl;
			if (cin && n >= 0  && A < B)
			{
				for (int i = 0; i <= n-1; i++)
				{
					if(array[i]>=A && array[i]<=B) amount++;
				}
				cout << "Кол-во элементов массива в диапазоне " << amount << endl;
			}
			else
				cout << "Введены некорректные значения диапазона или они отсутствуют" << endl;
			max = array[0];
			double maxn = 0;
			for (int i = 0; i <= n - 1; i++)
			{
				if (array[i] >= max)
				{
					max = array[i]; maxn = i;
				}
			}
			for (int i = maxn + 1; i <= n - 1; i++)
			{
				Sum += array[i];
			}
			cout << "Сумма элементов после максимального элемента " << Sum << endl;
			/*for (int i = 0; i < n - 2; i++)
			{
				for (int j = i + 1; j < n - 1; j++)
				{
					if (abs(array[i]) < abs(array[j]))
					{
						int x = array[i];
						array[i] = array[j];
						array[j] = x;
					}
				}
			}
			*/
			sort(array.begin(), array.end(), comp);
			for (int i = 0; i <= n - 1; i++)
			{
				cout << i + 1 << " элемент массива = " << array[i] << endl;
			}
	}
	else cout << "Введены некорректные значения";


}