#include <iostream>

int main(void)
{
    using namespace std;

    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;

    if (1 <= n && n <= 100)
    {
        for (int i = n; i > 0; i--)
        {
            for (int j = 0; j < i - 1; j++)
            {
                cout << " ";
            }
            for (int j = 0; j <= n - i; j++)
            {
                cout << "*";
            }

            cout << "\n";
        }
    }

    return 0;
}