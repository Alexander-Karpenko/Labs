#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double K, M, N, n1, n2, n3; // n1<n2<n3
	cout << "Введите 3 числа, не равных друг другу \n";
	cin >> K >> M >> N;
	if (cin)
	{
		if (K != M && M != N && K != N)
		{
			if (K < M && K < N)
			{
				n1 = K;
				if (M < N) n2 = M, n3 = N;
				else n2 = N, n3 = M;
			}
			else if (M < N && M < K)
			{
				n1 = M;
				if (K < N) n2 = K, n3 = N;
				else n2 = N, n3 = K;
			}
			else
			{
				n1 = N;
				if (K < M) n2 = K, n3 = M;
				else n2 = M, n3 = K;
			}
			cout << n1 << "<" << n2 << "<" << n3;
		}
		else cout << "Введены равные числа. Пожалуйста введите корректные значения.";
	}
	else cout << "Введены не числовые значения. Пожалуйста введите корректные значения.";
	return 0;

}   

