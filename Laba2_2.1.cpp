#include <sstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Введите последовательность целых чисел и + -" << endl;
	string in;
	getline(cin, in);
	in += 's';
	stringstream ss(in, ios_base::in);
	int n;
	bool error = 0, exit = 0;
	ss >> n;

	while (true)
	{
		int t; char c;
		ss >> c >> t;
		if (n == int(n) && (c == '+' || c == '-' || c == 's') && t == int(t) )
		{
			if (c == '+') n += t;
			else if (c == '-') n -= t;
			else if (c == 's') exit = 1;
		}
		else
		{
			cout << "Вы написали что-то неладное";
			error = 1;
		}
		if (exit == 1 || error == 1) break;	
	}
	if (error == 0)
	cout << "Результат выражения " << n << endl;

}