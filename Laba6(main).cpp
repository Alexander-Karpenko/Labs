#include "Laba6.1.h"

using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");

    vector<string> lines;
    string line;
    bool error = false;

   
    outfile1(error);
    if (error != true)
    {
        // ввод к
        int k = inK(error);

        // запись из файла в lines
        ifstream file("b.txt");
        while (getline(file, line))
            lines.push_back(line);
        file.close();

        // удаление строк
        lines = delete12(k, lines);

        //запись из lines в файл
        ofstream outfile("b.txt");
        for (const auto& line : lines)
            outfile << line << endl;
        outfile.close();

        outfile1(error);
    }
}
/*string line2;
   while (line2 != "stop")
   {
       cout << "Введите строку в файл, для выхода напишите stop";
       getline(cin, line2);
       fin << line2 << endl;
   }*/