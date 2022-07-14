#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;
	char* ptrStart = nullptr;
	char* ptrCount = nullptr;
	int count = 0;

	getline(cin, str);

	for (int i = 0; i < str.size(); i++)
	{
		ptrCount = &str[i];

		if (str[i] != ' ' && str[i] != '\0' && ptrStart == nullptr)
		{
			ptrStart = &str[i];
			count++;
		}

		if (*ptrCount == ' ' && ptrStart != nullptr)
			ptrStart = nullptr;
	}

	cout << count << endl;

	return 0;
}