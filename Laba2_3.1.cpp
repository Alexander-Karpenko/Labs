#include <iostream>
# include <ctime>	
using namespace std;

int ScalarMult(const int coord1[2], const int coord2[2])
{
	auto x1 = coord1[0], y1 = coord1[1], x2 = coord2[0], y2 = coord2[1];
	return x1 * y1 + x2 * y2;
}
double ScalarMult2(const double coord1[2], const double coord2[2])
{
	auto x1 = coord1[0], y1 = coord1[1], x2 = coord2[0], y2 = coord2[1];
	return x1 * y1 + x2 * y2;
}

int main()
{
	setlocale(LC_ALL, "rus");
	/*srand(time(0));
	//double A[2] = { (double)(rand()) / RAND_MAX * 10, (double)(rand()) / RAND_MAX * 10 };
	int A[2] = { (10 - rand() % 20),(10 - rand() % 20) };
	int B[2] = { (10 - rand() % 20),(10 - rand() % 20) };
	int X[2] = { (10 - rand() % 20),(10 - rand() % 20) };
	int Y[2] = { (10 - rand() % 20),(10 - rand() % 20) };
	int S1 = ScalarMult(X, Y);
	cout << "Скалярное произведение векторов X и Y равно " << S1 << endl;
	int S2 = ScalarMult(A, B);
	cout << "Скалярное произведение векторов A и B равно " << S2 << endl;
	*/
	bool error = false;
	double AllCoord[4][2]{};
	char VectorName[4] = { 'A', 'B', 'X', 'Y' };
	char VectorCoord[2] = {'x', 'y'};
	if (error == false)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				if (cin)
				{
					cout << "Введите " << VectorCoord[j] << " координату вектора " << VectorName[i] << endl;
					cin >> AllCoord[i][j];
				}
				else
				{
					cout << "Введены некорректные значения\n";
					error = true;
					break;
				}
			}
		}
		double A[2]{ AllCoord[0][0], AllCoord[0][1] };
		double B[2]{ AllCoord[1][0], AllCoord[1][1] };
		double X[2]{ AllCoord[2][0], AllCoord[2][1] };
		double Y[2]{ AllCoord[3][0], AllCoord[3][1] };

		double S1 = ScalarMult2(X, Y);
		cout << "Скалярное произведение векторов X и Y равно " << S1 << endl;
		double S2 = ScalarMult2(A, B);
		cout << "Скалярное произведение векторов A и B равно " << S2 << endl;
	}
	else
	{
		cout << "Введены некорректные значения\n";
	}
}