#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	int size = 0;
	int minNum = 0;
	int count = 0;
	int num = 0;

	cout << "Напишите количество чисел: ";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cout << "Введите число: ";
		cin >> num;

		if (num < minNum || i == 0)
		{
			minNum = num;
		}
		else if (minNum == num)
		{
			count++;
		}
	}

	cout << "Минимальное число: " << minNum << endl;
	cout << "Количество повторений минимального числа: " << count << endl;

}
