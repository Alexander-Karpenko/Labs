#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	setlocale (LC_ALL, "Rus");
	double X = 4.5,Y=2, Agl, Pi = 3.14159265, h = 0.2;
	while (Y<3.2)
	{
		cout << "X = " << X << ", Y = " << Y<<". ";
		Agl = acos(Y / X) * 180 / Pi;
		cout <<"Угол равен "<< Agl<<endl;
		Y +=h;
	}
}