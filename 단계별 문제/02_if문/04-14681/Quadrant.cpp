#include <iostream>

int main(void)
{
    using namespace std;

    int x, y;

    cin >> x >> y;

    if (-1000 <= x && x <= 1000 && x != 0 &&
        -1000 <= y && y <= 1000 && y != 0)
    {
        if (0 < x)
        {
            if (0 < y)
            {
                cout << "1";
            }
            else
            {
                cout << "4";
            }
        }
        else
        {
            if (0 < y)
            {
                cout << "2";
            }
            else
            {
                cout << "3";
            }
        }
    }

    return 0;
}