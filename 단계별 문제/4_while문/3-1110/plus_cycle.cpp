#include <iostream>

int main(void)
{
    using namespace std;

    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, clone, count = 0;;

    cin >> n;
    clone = n;

    while(1)
    {
        int x, y;

        if (clone < 10)
        {
            x = 0;
            y = clone % 10;
        }
        else
        {
            x = (clone - (clone % 10)) / 10;
            y = clone % 10;

        }

        int temp = (x + y) % 10;

        //cout << clone << " = " << x << " + " << y << " => " << temp << "\n";
        //cout << y << " " << temp << "\n";

        clone = (y * 10) + temp;

        count++;

        if (n == clone)
        {
            cout << count;
            break;
        }
    }

	return 0;
}