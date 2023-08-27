#include <iostream>
#include <string>
using namespace std;

char XOR(string str)
{
	int s = size(str);
	const char* input = str.c_str();

	char* output = new char[s];

	for (int i = 0; i < sizeof(str) + 1; ++i)
	{
		output[i] = input[i] ^ 10;
	}
	for (int i = 0; i < s; i++)
	{
		cout << output[i];
	}
	cout << endl;
	return 0;
}
const char XOR1(char str [])
{
	char input[]{ 1,1 };
	const char* outputf;
	string s;

	char* output = new char[sizeof(input)];

	for (int i = 0; i < sizeof(input) + 1; ++i)
	{
		output[i] = input[i] ^ 10;
	}
	for (int i = 0; i < sizeof(input); i++)
	{
		s+= output[i] ;
	}
	cout << s;
	cout << endl;
	
	return 0;
}


int main()
{

	char input[]{'w',' '};
	const char* outputf;
	

	char* output = new char[sizeof(input)];

	for (int i = 0; i < sizeof(input) + 1; ++i)
	{
		output[i] = input[i] ^ 10;
	}
	
	
	

		
	

}