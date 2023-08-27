/* Вычислить значение z=x⁴ (в четвертой степени) -y² (во второй степени) *x² (во второй степени) +7x-3, при заданных x и y.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double z, x, y;
	cout << "Введите x и y \n";
	cin >> x >> y;
	z = pow(x, 4)- pow(y,2)*pow(x,2)+7*x-3;
	cout << "Получено значение функции " << z <<endl ;
	return 0;

}
