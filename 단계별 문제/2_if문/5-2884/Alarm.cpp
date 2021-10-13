#include <iostream>

int main(void)
{
    using namespace std;

    int h, m;
    int result_h, result_m;

    cin >> h >> m;

    if ((0 <= h && h <= 23) &&
        (0 <= m && m <= 59))
    {
        result_h = h;
        result_m = m - 45;

        if (result_m < 0)
        {
            result_h--;
            result_m += 60;

            if (result_h < 0)
            {
                result_h += 24;
            }
        }

        cout << result_h << " " << result_m;
    }

    return 0;
}