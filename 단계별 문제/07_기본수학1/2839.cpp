#include <iostream>

using namespace std;

int main(void)
{
	int sugar;		// 배달하는 설탕 봉지

	cin >> sugar;

	int* arr = new int[(sugar / 5) + 1];

	int five_count = 0;

	for (int i = 0; i <= (sugar / 5); i++)
	{
		int temp = sugar;
		int three_count = 0;

		temp -= 5 * i;
		if (i > 0)
			five_count++;

		if (!temp)		// temp == 0
		{
			arr[i] = five_count + three_count;
		}
		else
		{
			for (int j = 0; temp >= 3; j++)
			{
				temp -= 3;
				three_count++;
			}

			if (temp != 0)
			{
				arr[i] = -1;
			}
			else
			{
				arr[i] = five_count + three_count;
			}
		}
	}

	int min = 5000;

	for (int i = 0; i <= (sugar / 5); i++)
		if (arr[i] < min && arr[i] != -1)
			min = arr[i];

	if (min == 5000)
		cout << -1 << endl;
	else
		cout << min << endl;

	delete[] arr;

	return 0;
}