﻿#include <iostream>

using namespace std;

int main(void)
{
	int a, b, v;

	cin >> a >> b >> v;

	// ((v - a) + (a - b) - 1) / (a - b)
	cout << ((v - b - 1) / (a - b)) + 1 << endl;

	return 0;
}