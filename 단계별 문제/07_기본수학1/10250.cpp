#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	int t;		// t개의 테스트 데이터
	int h, w, n;		// h = 호텔 층 수, w = 각 층의 방 수, n = 몇 번째 손님

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		// printf("02d\n", n % h, (n / h) + 1);	// C

		cin >> h >> w >> n;

		if (!(n % h))
			cout << h << setw(2) << setfill('0') << (n / h) << endl;
		else
			cout << n % h << setw(2) << setfill('0') << (n / h) + 1 << endl;;
	}

	return 0;
}