#include "xmlrpc/XmlRpc.h"
#include <conio.h>



#include <iostream>

using namespace XmlRpc;
using namespace std;

class GenPass : public XmlRpcServerMethod 
{ // ����� ������ �������, ����������� �� XmlRpcServerMethod
public:
    explicit GenPass(XmlRpcServer* server) : XmlRpcServerMethod("127.0.0.1", server) {} // �������� ���������� ������ XmlRpcServerMethod

    void execute(XmlRpcValue& params, XmlRpcValue& result) override 
    { // ���, ������� ����� ����������� ��� ���������� �������
        std::cout << "��������� ������" << std::endl; // ������ ������� � ������� �������
        result[0] = "lox";
    }
};

int main() 
{ // ����� ����� � ���������
    system("chcp 1251");
    int port = 20000; // ��������� ���������� - ����, ��� ����� ������� ����������� �� ��������

    XmlRpcServer server; // ������� ����� �������

    GenPass generatePass(&server); // ������ ����� ������ ������� (����� ��� ��������� ������ �������)

    server.bindAndListen(port); // ������� �������, ��� �������

    while (!_kbhit()) 
    {
        server.work(-1.0);
        server.exit();
        server.shutdown();
    }
}