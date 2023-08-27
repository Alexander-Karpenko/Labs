#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	char str[100];
	fputs("Введите строку \n", stdout);
	fgets(str, 100, stdin);
	puts("Преобразованная строка ");
	printf(_strupr(str));	
}