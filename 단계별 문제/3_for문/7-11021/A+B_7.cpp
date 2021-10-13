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

    for (int i = 1; i <= t; i++)
    {
        cin >> a >> b;

        if (0 < a && b < 10)
        {
            cout << "Case #" << i << ": " << a + b << "\n";
        }
    }

    return 0;
}