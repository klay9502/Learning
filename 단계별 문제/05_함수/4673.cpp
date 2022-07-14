#include <iostream>
#include <sstream>

using namespace std;

int d(int _num)
{
    string str = to_string(_num);
    int sum = 0;

    for (int i = 0; i < str.size(); i++)
    {
        sum += str[i] - '0';
    }

    return _num + sum;
}

int main(void)
{
    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int max = 10000;
    int* num = new int[max];

    for (int i = 1; i <= max; i++)
    {
        num[i-1] = d(i);
    }

    for (int i = 1; i <= max; i++)
    {
        bool temp = false;

        for (int j = 0; j < max; j++)
        {
            if (i == num[j])
            {
                temp = true;
                break;
            }
        }

        if (!temp)
        {
            cout << i << "\n";
        }
    }

    return 0;
}