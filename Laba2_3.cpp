#include <iostream>
using namespace std;

int SumRange(int A, int B, int Sum = 0)
{
	if (A > B) return 0;
	else 
	{
		while (A <= B)
		{
			Sum += A;
			A++;
		}
		return Sum;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	double A, B, C;
	cout << "Введите целое число \n";
	cin >> A;
	cout << "Введите целое число, больше предыдущего \n";
	cin >> B;
	cout << "Введите целое число, больше предыдущего \n";
	cin >> C;
	if (cin && (double)A == (int)A && (double)B == (int)B && (double)C == (int)C)
	{
		cout << "Сумма чисел от А до B равна " << SumRange(A, B) << endl;
		cout << "Сумма чисел от B до C равна " << SumRange(B, C) << endl;
	}
	else cout << "Введены некорректные данные ";
}