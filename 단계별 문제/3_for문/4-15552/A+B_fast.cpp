#include <iostream>

int main(void)
{
    using namespace std;

    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t;
    int a, b;

    cin >> t;

    if (0 < t && t <= 1000000)
    {
        for (int i = 0; i < t; i++)
        {
            cin >> a >> b;

            if ((0 < a && a <= 1000) &&
                (0 < b && b <= 1000))
            {
                cout << a + b << "\n";
            }
        }
    }

    return 0;
}