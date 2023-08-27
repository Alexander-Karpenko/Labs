#include "xmlrpc/XmlRpc.h"
#include <conio.h>



#include <iostream>

using namespace XmlRpc;
using namespace std;

class GenPass : public XmlRpcServerMethod 
{ // класс метода деления, наследуется от XmlRpcServerMethod
public:
    explicit GenPass(XmlRpcServer* server) : XmlRpcServerMethod("127.0.0.1", server) {} // вызываем конструкор самого XmlRpcServerMethod

    void execute(XmlRpcValue& params, XmlRpcValue& result) override 
    { // код, который будет выполняться при выполнении команды
        std::cout << "генерация пароля" << std::endl; // просто строчка в консоль сервера
        result[0] = "lox";
    }
};

int main() 
{ // точка входа в программу
    system("chcp 1251");
    int port = 20000; // объявляем переменную - порт, где будем случать подключения от клиентов

    XmlRpcServer server; // создаем класс сервера

    GenPass generatePass(&server); // создаём класс метода деления (метод сам добавится внутрь сервера)

    server.bindAndListen(port); // говорим серверу, где слушать

    while (!_kbhit()) 
    {
        server.work(-1.0);
        server.exit();
        server.shutdown();
    }
}