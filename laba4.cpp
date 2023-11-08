#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	const int DLYPOPA = 15;

	int arr[DLYPOPA]{
		4, 1, 3, -4, 4, 8, 43, 23, 5, 5, 6, 8, 33, 6, 6
	};

	int minNum = 0;
	int maxNum = 0;

	for (int i = 0; i < DLYPOPA; i++)
	{
		if (arr[i] < minNum || i == 0)
		{
			minNum = arr[i];
		}

		if (arr[i] > maxNum || i == 0)
		{
			maxNum = arr[i];
		}

	}

	cout << "Минимальное число будет: " << minNum << endl;
	cout << "Максимальное число будет: " << maxNum << endl;

}
