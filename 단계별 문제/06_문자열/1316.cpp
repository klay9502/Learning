#include <iostream>

using namespace std;

bool CheckDuplicate(char* _list, char _checkChar)
{
	for (int i = 0; _list[i] != '\0'; i++)
	{
		if (_list[i] == _checkChar)
			return false;
	}

	return true;
}

bool CheckGroup(char* _list, char* _checklist)
{
	char pointer = NULL;

	for (int i = 0; _checklist[i] != '\0'; i++)
	{
		bool bIsDuplicate = false;

		for (int j = 0; _list[j] != '\0'; j++)
		{
			if (!bIsDuplicate && _checklist[i] == _list[j])
			{
				pointer = _checklist[i];
				bIsDuplicate = true;
			}

			if (_checklist[i] != _list[j])
			{
				pointer = _list[j];
			}

			if (bIsDuplicate && _checklist[i] == _list[j] && pointer != _checklist[i])
			{
				return false;
			}
		}
	}

	return true;
}

int main(void)
{
	int num;
	int dic_count = 0;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		char* str = new char[100];
		char check[26] = {};
		int count = 0;

		cin >> str;

		for (int j = 0; str[j] != '\0'; j++)
		{
			if (CheckDuplicate(check, str[j]))
			{
				check[count] = str[j];
				count++;
			}
		}

		if (CheckGroup(str, check))
		{
			dic_count++;
		}

		delete[] str;
	}

	cout << dic_count << endl;

	return 0;
}