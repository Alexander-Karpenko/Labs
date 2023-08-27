#include "Laba6.1.h"
void fin1()
{
    ofstream fin("b.txt");
    fin << "check file work 1" << endl << "check file work 2" << endl << "check file work 3" << endl << "check file work 4";
    fin.close();
}

void outfile1(bool &error)
{
    string getcontent1;
    ifstream openfile1("b.txt");
    bool FlagOpen, FlagNotEmpty;
    
    if (openfile1.is_open())
    {
        if (openfile1.peek() != EOF)
        {
            while (getline(openfile1, getcontent1))
            {
                cout << getcontent1 << endl;

            }
        }
        else
        {
            cout << "Ошибка, файл пустой" << endl;
            error = true;
        }

    }
    else
    {
        if (openfile1.is_open())
        {
            cout << "Ошибка, не удалось открыть файл" << endl;
            error = true;
        }
       
    }
    openfile1.close();

}
int inK(bool &error)
{
    if (error != true)
    {
        double k;
        while (true)
        {

            cout << "Введите целое число K: ";
            cin >> k;
            if (cin.fail() || k <= 0 || k != int(k))
            {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "Ошибка! Введите целое число больше нуля." << endl;
            }
            else
                break;
        }
        return k;
    }
}
vector<string> delete12(int k, vector<string> lines)
{
    if (k <= lines.size())
        lines.erase(lines.end() - k, lines.end());
    else
    {
        cout << "Ошибка! Файл содержит меньше " << k << " строк." << endl;
    }
    return lines;
}