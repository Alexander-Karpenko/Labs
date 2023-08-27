#include <iostream>
using namespace std;
int main()
{
	int A[10];
	int* p;
	p = A;
	for (int i = 0; i < 10; i++)
	{
		p[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout<< p[i];
	}
	delete  p;
	
}