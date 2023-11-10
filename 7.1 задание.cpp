#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int sizeOne[10], sizeTwo[20];
	srand(time(0));

	bool removeRepeat;

	for (int i = 0; i < 10;)
	{
		removeRepeat = false;
		int randomValue = rand() % 10;

		for (int y = 0; y < i; y++)
		{
			if (sizeOne[y] == randomValue)
			{
				removeRepeat = true;
				break;
			}
		}

		if (!removeRepeat)
		{
			sizeOne[i] = randomValue;
			i++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << sizeOne[i] << " ";
	}

	cout << endl;

	for (int u = 0; u < 20;)
	{
		removeRepeat = false;
		int randomValue = rand() % 20;

		for (int t = 0; t < u; t++)
		{
			if (sizeTwo[t] == randomValue)
			{
				removeRepeat = true;
				break;
			}
		}
		if (!removeRepeat)
		{
			sizeTwo[u] = randomValue;
			u++;
		}

	}

	for (int u = 0; u < 20; u++)
	{
		cout << sizeTwo[u] << " ";
	}
}
