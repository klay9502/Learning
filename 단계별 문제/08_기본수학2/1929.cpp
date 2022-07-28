#include <iostream>

using namespace std;

void Eratos(int m, int n);

int main(void)
{
	int n = 0;
	int m = 0;

	// 처리속도 UP, C의 입출력 사용안됌!
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	// 1 <= m <= n <= 1,000,000
	cin >> m >> n;

	Eratos(m, n);
	
	return 0;
}

void Eratos(int m, int n)
{
	if (n <= 1) return;

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
		if (PrimeArray[i] && i >= m && i != 0 && i != 1)
			cout << i << "\n";

	delete[] PrimeArray;
}