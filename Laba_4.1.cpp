#include <iostream>
using namespace std;

int main()
{   
	setlocale(LC_ALL, "Russian");
	float N, Sqrt=0;
	cout << "Введите целое число больше нуля\n";
	cin >> N;
	if (cin)
	{
		if ((N > 0) && N == int(N))
		{
			for (int i = 1; i <= N; i++)
			{
				Sqrt = 2 * i - 1 + Sqrt;
				cout << "Квадрат " << i << " равен " << Sqrt << endl;
			}

		}
		else cout << "Введено число больше нуля либо дробное. ";
	}
	else cout << "Введено некорректное значение ";

}
