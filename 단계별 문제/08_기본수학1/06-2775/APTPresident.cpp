#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int t;		// test case

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int k, n;		// k층에 n호
		int people = 0;

		cin >> k;
		cin >> n;

		int* under = new int[n];
		int* floor = new int[n];
		floor[0] = 1;

		// zero floor initialize
		for (int j = 1; j <= n; j++)
		{
			under[j - 1] = j;
		}

		// processing
		for (int j = 0; j < k; j++)
		{
			for (int p = 1; p < n; p++)
			{
				floor[p] = under[p] + floor[p - 1];
			}

			copy(floor, floor + n, under);		// copy array
		}

		cout << floor[n-1] << endl;

		delete[] floor;
		delete[] under;
	}

	return 0;
}