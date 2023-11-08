#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	int size = 1;
	int num = 0;

	cout << "Напишите число n: ";
	cin >> size;

	for (int i = 1; i < size + 1; i++)
	{
		num += i;
	}

	cout << "Результатом будет: " << num;
}
