#include <iostream>

using namespace std;

int main(void)
{
	int hour, min;
	int input;

	cin >> hour >> min;
	cin >> input;

	int pH = (min + input) / 60;
	int pM = (min + input) % 60;

	hour = (hour + pH) % 24;
	min = pM;

	cout << hour << " " << min << endl;

	return 0;
}