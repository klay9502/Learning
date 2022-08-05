#include <iostream>
#include <cmath>

using namespace std;

int* Eratos(int max);

int main(void)
{
	int t = 0;

	// 처리속도 UP, C의 입출력 사용안됌!
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	// 1 <= n <= 123,456
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n;
		int* temp;
		cin >> n;

		temp = Eratos(n);

		int min_gap = 10000;
		int choose[2] = {0, };

		for (int i = 0; temp[i] != 0; i++)
		{
			for (int j = 0; temp[j] != 0; j++)
			{
				if (n == temp[i] + temp[j])
				{
					if (min_gap > abs(temp[i] - temp[j]))
					{
						choose[0] = temp[i];
						choose[1] = temp[j];
						min_gap = abs(temp[i] - temp[j]);
					}
				}
			}
		}

		cout << choose[0] << " " << choose[1] << "\n";
	}
}

int* Eratos(int max)
{
	int count = 0;

	if (max <= 1) return nullptr;

	bool* PrimeArray = new bool[max + 1];
	int* result = new int[max]{0, };

	for (int i = 2; i <= max; i++)
		PrimeArray[i] = true;

	for (int i = 2; i * i <= max; i++)
	{
		if (PrimeArray[i])
			for (int j = i * i; j <= max; j += i)
				PrimeArray[j] = false;
	}

	for (int i = 0; i <= max; i++)
	{
		if (PrimeArray[i] && i != 0 && i != 1)
		{
			result[count] = i;
			count++;
		}
	}

	delete[] PrimeArray;

	return result;
}