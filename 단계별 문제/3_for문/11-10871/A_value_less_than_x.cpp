#include <iostream>

int main(void)
{
    using namespace std;

    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, x;

    cin >> n >> x;

    if ((1 <= n && n <= 10000) &&
        (1 <= x && x <= 10000))
    {
        int a;

        for (int i = 0; i < n; i++)
        {
            cin >> a;

            if (1 <= a && a <= 10000)
            {
                if (a < x)
                {
                    cout << a << " ";
                }
            }
        }
    }

    return 0;
}