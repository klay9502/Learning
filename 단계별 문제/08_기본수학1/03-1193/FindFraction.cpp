#include <iostream>

using namespace std;

int main(void)
{
	int x;
	int up = 1;		// 분자
	int down = 1;	// 분모
	int count = 1;

	cin >> x;

	for (int i = 0; i < (x - 1); i++)
	{
		if (down == 1)
		{
			count++;
			down = count;
			up = 1;
		}
		else
		{
			down--;
			up++;
		}
	}

	if (!(count % 2))
	{
		cout << up << "/" << down << endl;
	}
	else
	{
		cout << down << "/" << up << endl;
	}

	return 0;
}