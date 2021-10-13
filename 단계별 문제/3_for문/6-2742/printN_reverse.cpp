#include <iostream>

int main(void)
{
    using namespace std;

    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;

    if (0 < n && n <= 100000)
    {
        for (int i = n; i > 0; i--)
        {
            cout << i << "\n";
        }
    }

    return 0;
}