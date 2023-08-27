#include "Laba_5.21.h"

using namespace std;

bool compare(const NOTE& a, const NOTE& b)
{
    return a.TELE.substr(0, 3) < b.TELE.substr(0, 3);
}

int main()
{ 
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int N = 0 ;
    bool error = 0;
    
    cout << "Введите количество записей в массиве BLOCKNOTE: " << endl;
    if (cin)  cin >> N;
    if ( N == 0 && N < 0) error = 1;
    
    if (error == 0)
    {
        NOTE* BLOCKNOTE = new NOTE[N];

        for (int i = 0; i < N; i++)
        {
            cout << "Введите фамилию и имя человека " << i + 1 << ": " << endl;
            cin >> BLOCKNOTE[i].SURNAME;
            cin >> BLOCKNOTE[i].NAME;

            cout << "Введите номер телефона человека " << i + 1 << ": " << endl;
            cin >> BLOCKNOTE[i].TELE;
            if (all_of(BLOCKNOTE[i].TELE.begin(), BLOCKNOTE[i].TELE.end(), isdigit)) {}
            else { error = 1; }
            
            

            if (error == 0)
            {
                cout << "Введите день рождения человека " << i + 1 << " (в формате DD MM YYYY): " << endl;
                
                for (int j = 0; j < 3; j++)
                {
                    cin >> BLOCKNOTE[i].BDAY[j];

                    if (cin && int(BLOCKNOTE[i].BDAY[j]) == int(BLOCKNOTE[i].BDAY[0]))
                    {}
                    else error = 1;
                }
            }
            else 
            {
                cout << "Введены некорректные данные";
                break;
            }

        }

        if (error == 0)
        {
            cout << "\t" << "Неотсортированный список" << endl << endl;
            OutPersons(BLOCKNOTE, N);
            sort(BLOCKNOTE, BLOCKNOTE + N, compare);
            cout << "\t" << "Отсортированный список" << endl << endl;
            OutPersons(BLOCKNOTE, N);
        
            string name;
            cout << "Введите фамилию человека, информацию о котором вы хотите узнать: " << endl;
            cin >> name;

            CheckPerson(BLOCKNOTE, name, N);
        }
        else cout << "Введены некорректные данные";
        
    }

    else cout << "Введены некорректные данные";
    
}
