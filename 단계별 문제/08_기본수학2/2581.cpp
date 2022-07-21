#include <iostream>

using namespace std;

int main(void)
{
	// m <= x <= n
	int n = 0;
	int m = 0;
	int count = 0;
	int minValue;
	int total = 0;

	cin >> m;
	cin >> n;

	minValue = n;

	for (int i = m; i <= n; i++)
	{
		bool check = false;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				check = true;
				break;
			}
			else continue;
		}

		if (!check && i != 1)
		{
			count++;
			total += i;

			if (minValue >= i)
				minValue = i;
		}
	}

	if (count != 0)
		cout << total << endl << minValue;
	else cout << -1 << endl;

	return 0;
}