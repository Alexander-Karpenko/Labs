#include <iostream>
#include <time.h>
#include <iterator>
#include <algorithm>
#include <stdlib.h>
#include <limits>


using namespace std;

int main() {
	long int x, min = 11, sumArr = 0, proArr = 1;
	double n;
	while (true)
	{
		cout << "Enter the size of the array: ";
		if ((cin >> n).fail() || n != int(n) || (n <= 0)) {
			cout << "Incorrect Input!" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		if (n > 0) {
			break;
		}
	}
	int* array = new int[n];
	srand(time(NULL));

	for (int i = 0; i < n; i++) {
		array[i] = rand() % 30 - 20;
		if (array[i] < min) 
		{
			min = array[i];
		}
		cout << array[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		if (array[i] != min) {
			sumArr = sumArr + array[i];
		}
		else if (array[i] = min) {
			break;
		}
	}
	cout << "The sum of the array elements arranged to the minimum value: " << sumArr << endl;

	for (int i = 0; i < n; i++) {
		if (array[i] > 0) {
			proArr = proArr * array[i];
		}
	}
	cout << "The product of positive elements: " << proArr << endl;
	
	for (int i = 1; i < n - 1; i = i + 2) 
	{
		for (int j = i + 2; j < n - 1 ; j += 2) 
		{ 
			if (array[i] > array[j])
			{
				x = array[i];
				array[i] = array[j];
				array[j] = x;
			}

		}
		//cout « "Numbers in even positions: " « array[i] « endl;
	}

	for (int i = 0; i < n - 1; i = i + 2) 
	{
		for (int j = i + 2; j < n; j += 2) 
		{
			if (array[i] > array[j])
			{
				x = array[i];
				array[i] = array[j];
				array[j] = x;
			}

		}
		//cout « "Numbers in odd positions: " « array[i] « endl;
	}

	for (int i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << endl;
	system("PAUSE");
	return 0;
}

