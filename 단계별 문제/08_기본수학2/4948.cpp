#include <iostream>

using namespace std;

int Eratos(int m, int n);

int main(void)
{
	int n = 0;

	// 처리속도 UP, C의 입출력 사용안됌!
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	// 1 <= n <= 123,456
	while (1)
	{
		cin >> n;

		if (n == 0)
			return 0;

		cout << Eratos(n, 2 * n) << endl;
	}
}

int Eratos(int m, int n)
{
	int count = 0;

	if (n <= 1) return -1;

	bool* PrimeArray = new bool[n + 1];

	for (int i = 2; i <= n; i++)
		PrimeArray[i] = true;

	for (int i = 2; i * i <= n; i++)
	{
		if (PrimeArray[i])
			for (int j = i * i; j <= n; j += i)
				PrimeArray[j] = false;
	}

	for (int i = 0; i <= n; i++)
		if (PrimeArray[i] && i > m && i != 0 && i != 1)
			count++;

	delete[] PrimeArray;

	return count;
}