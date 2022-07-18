#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int n = 0;
	int count = 0;
	
	cin >> n;

	int* x = new int[n];

	for (int i = 0; i < n; i++)
	{
		bool check = false;
		cin >> x[i];
		
		for (int j = 2; j < x[i]; j++)
		{
			if (x[i] % j == 0)
			{
				check = true;
				break;
			}
			else continue;
		}

		if (!check && x[i] != 1) count++;
	}

	cout << count << endl;

	delete x;

	return 0;
}