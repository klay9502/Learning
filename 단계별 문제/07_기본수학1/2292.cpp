#include <iostream>

using namespace std;

int main(void)
{
	int n;
	int temp = 1;
	int count = 1;

	cin >> n;

	for (int i = 1; n > temp; i++)
	{
		temp += (6 * i);
		count++;
	}

	cout << count << endl;

	return 0;
}