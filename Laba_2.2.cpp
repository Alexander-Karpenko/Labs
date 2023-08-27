
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y, e = 2.718;
    cout << "Введите x \n";
    cin >> x;
    if (cin) 
    {
        if (x <= -3)
        {
            y = sin(pow(x, 2));
        }
        else if (-3 < x && x < 5)
        {
            y = 1 + pow(e, -x);
        }
        else
        {
            y = log(pow(x, 2)) / (3 + 4  * x);
        }
        cout << "y = " << y;
    }
    else cout << "Введены некорректные значения";
}

