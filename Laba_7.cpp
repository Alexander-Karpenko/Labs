# include <iostream>
# include <ctime>
# include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	double N, M;
	srand(time(0));

	cout << "Введите кол-во строк " << endl;
	cin >> N;
	cout << "Введите кол-во столбцов " << endl;
	cin >> M;

	if (cin && double(M)==int(M) && double(N) == int(N) && N > 0 && M > 0)
	{
		// объявление массива
		int** row = new int* [N];
		for (int i = 0; i < N; i++)
		{
			row[i] = new int[M];
		}

		// заполнение массива 
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				row[i][j] = 10 - rand() % 10;
			}
		}

		cout << "вывод массива" << endl;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				cout << row[i][j] << " \t";
			}
			cout << endl;
		}
		cout << endl;

		cout << "вывод массива по нечетным столбцам" << endl;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j += 2)
			{
				cout << row[i][j] << " \t";
			}
			cout << endl;
		}
		cout << endl;

		// неповторяющиеся элементы
		cout << "неповторяющиеся элементы" << endl;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				int nowvalue = row[i][j];
				bool hasEquals = false;
				for (int y = 0; y < N; y++)
				{
					for (int x = 0; x < M; x++)
					{
						if (i == y && j == x)
						{
							continue;
						}
						if (nowvalue == row[y][x])
						{
							hasEquals = true;
							break;

						}
					}
				}
				if (hasEquals == false)
					cout << nowvalue << " ";
			}
		}
		// удаление массива 
		for (int i = 0; i < N; i++)
		{
			delete[] row[i];
		}
		delete[] row;
	}
	else cout << "Введены некорректные значения ";
}