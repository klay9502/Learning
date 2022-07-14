#include <iostream>

using namespace std;

int main(void)
{
	int input[3];
	int overlap_input;
	int select_level = 0;
	int result = 0;

	cin >> input[0] >> input[1] >> input[2];

	for (int i = 0; i < 3; i++)
	{
		int level = 1;

		for (int j = 0; j < 3; j++)
		{
			if (input[i] == input[j] && i != j)
			{
				overlap_input = input[i];
				level++;
			}
		}

		if (level >= select_level)
			select_level = level;
	}

	int max = 0;

	switch (select_level)
	{
	case 1:			// 중복 없음
		for (int i = 0; i < 3; i++)
		{
			if (input[i] > max)
				max = input[i];

			result = max * 100;
		}
		break;
	case 2:			// 중복 숫자 2개
		result = 1000 + (overlap_input * 100);
		break;
	case 3:			// 중복 숫자 3개
		result = 10000 + (overlap_input * 1000);
		break;
	}

	cout << result << endl;

	return 0;
}