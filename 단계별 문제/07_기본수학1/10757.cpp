#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(void)
{
	string a, b;
	string result = "";
	int temp_int = 0;

	cin >> a >> b;

	if (a.size() > b.size())
	{
		int temp = a.size() - b.size();
		for (int i = 0; i < temp; i++)
		{
			b = '0' + b;
		}
	}
	else
	{
		int temp = b.size() - a.size();
		for (int i = 0; i < temp; i++)
		{
			a = '0' + a;
		}
	}

	int i = 1;

	do
	{
		temp_int += (a[a.size() - i] - '0') + (b[b.size() - i] - '0');

		if (temp_int / 10 && i < a.size())
			result = to_string(temp_int % 10) + result;
		else
			result = to_string(temp_int) + result;

		temp_int = temp_int / 10;

		i++;
	} while (i <= a.size());

	cout << result;

	return 0;
}