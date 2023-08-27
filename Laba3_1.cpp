#include "Laba3_1.h"

int countNum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + countNum(n / 10);
}

int countNum2(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if ((n % 10) % 2 == 0)
    {
        return 1 + countNum2(n / 10);
    }
    else
    {
        return countNum2(n / 10);
    }
}

void CheckandOut(double n)
{
    if (cin && (double(n) == int(n)))
    {
        if (n != 0)
        {
            cout << "Кол-во чисел в числе " << countNum(n) << endl;
            cout << "Кол-во четных чисел в числе " << countNum2(n) << endl;
        }
        else if (n == 0)
        {
            cout << "Кол-во чисел в числе " << 1 << endl;
            cout << "Кол-во четных чисел в числе " << 1 << endl;
        }
    }
    else cout << "Введены некорректные данные " << endl;
}
