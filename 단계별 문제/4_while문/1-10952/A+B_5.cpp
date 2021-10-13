#include <iostream>

int main(void)
{
    using namespace std;

    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b;

    while (1)
    {
        cin >> a >> b;

        if (a == 0 && b == 0)
        {
            break;
        }
        else
        {
            cout << a + b << "\n";
        }
    }

    return 0;
}