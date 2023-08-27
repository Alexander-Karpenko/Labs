#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int A[10];
	int sum2 = 0, sum20 = 0, sum8 = 0, n2 = 0, n20 = 0, n8 = 0;
		for (int i = 0; i < 10; i++)
		{
			
			if (cin )
			{
				cout << "Введите " << i + 1 << " элемент массива" << endl;
				cin >> A[i];
				if (A[i] > 2) { sum2 += A[i]; n2++; }
				if (A[i] < 20) { sum20 += A[i]; n20++; }
				if (A[i] % 8 == 0) { sum8 += A[i]; n8++; }
			}
			else {  cout << " Введены некорректные значения "<< endl; break;}
		}

		cout << "Сумма элементов больше 2 равна " << sum2 << ". Число элементов " << n2 << endl;
		cout << "Сумма элементов меньше 20 равна " << sum20 << ". Число элементов " << n20 << endl;
		cout << "Сумма элементов кратная 8 равна " << sum8 << ". Число элементов " << n8 << endl;
	

}  
