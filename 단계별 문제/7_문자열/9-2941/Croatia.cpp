#include <iostream>

using namespace std;

int CheckChar(char* _ptrChar)
{
	if (*_ptrChar == 'c' || *_ptrChar == 'd' || *_ptrChar == 'l' || *_ptrChar == 'n' || *_ptrChar == 's' || *_ptrChar == 'z')
	{
		switch (*_ptrChar) {
		case 'c':
			if (*(_ptrChar + 1) == '=')
				return 1;
			if (*(_ptrChar + 1) == '-')
				return 1;
			break;
		case 'd':
			if (*(_ptrChar + 1) == 'z' && *(_ptrChar + 2) == '=')
				return 2;
			if (*(_ptrChar + 1) == '-')
				return 1;
			break;
		case 'l':
			if (*(_ptrChar + 1) == 'j')
				return 1;
			break;
		case 'n':
			if (*(_ptrChar + 1) == 'j')
				return 1;
			break;
		case 's':
			if (*(_ptrChar + 1) == '=')
				return 1;
			break;
		case 'z':
			if (*(_ptrChar + 1) == '=' && *(_ptrChar - 1) != 'd')
				return 1;
			break;
		}
	}

	return 0;
}

int main(void)
{
	string ex_str[8] = {
		"c=",
		"c-",
		"dz=",
		"d-",
		"lj",
		"nj",
		"s=",
		"z=",
	};
	string str;
	int count = 0;
	int del_count = 0;

	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		del_count += CheckChar(&str[i]);
		count++;
	}

	cout << count - del_count;

	return 0;
}