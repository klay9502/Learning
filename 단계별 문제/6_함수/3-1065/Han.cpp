#include <iostream>
#include <sstream>

using namespace std;

bool func(int _n)
{
    if (0 < _n && _n < 100)
    {
        return true;
    }
    else
    {       // 100 <= _n
        string str = to_string(_n);

        int temp = str[0] - str[1];

        for (int i = 0; i < str.size(); i++)
        {
            if ((i != str.size() - 1) && (temp != str[i] - str[i + 1]))
            {
                return false;
            }
        }

        return true;
    }
}

int main(void)
{
    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int count = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (func(i))
        {
            count++;
        }
    }

    cout << count;

    return 0;
}