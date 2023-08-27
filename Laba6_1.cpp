#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int A[10];
	int sum2 = 0, sum20 = 0, sum8 = 0, n2 = 0, n20 = 0, n8 = 0;
	
	if (cin)
	{
		for (int i = 0; i < 10; i++)
		{
			if (cin)
			{
				
				cout << "Введите " << i + 1 << " элемент массива" << endl;
				cin >> A[i];
				if ((A[i] > 2) && (A[i] < 20) && (A[i] % 8 == 0)) { sum2 += A[i]; n2++; }
				if (A[i] < 20) { sum20 += A[i]; n20++; }
				if (A[i] % 8 == 0) { sum8 += A[i]; n8++; }
			}
			else { cout << " Введены некорректные значения " << endl; break; }
		}
		
			cout << "Сумма элементов больше 2, меньше 20 и кратная 8 равна " << sum2 << ". Число элементов " << n2 << endl;
			for (int i = 0; i < 10; i++)
			{
				cout << A[i] << " ";
			}
		
	}
}
