#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	const int DLYPOPA = 10;

	int arr[DLYPOPA] = {
		5, 2, 2, 8, 3, 6, 0, 7, 9, 2
	};

	cout << "Размер массива: " << DLYPOPA << endl;

	int sum = 0;

	for (int i = 0; i < DLYPOPA; i++)
	{
		cout << "Число " << arr[i] << " является '" << i + 1 << "' элементом в массиве" << endl;

		if (arr[i] % 3 == 0)
		{
			sum += arr[i];
		}
	}

	cout << "Суммой всех чисел кратных 3 будет: " << sum;
}
