#include <iostream>
#include <sstream>

int main(void)
{
    using namespace std;

    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b, c;

    cin >> a >> b >> c;

    if ((100 <= a && a < 1000) &&
        (100 <= b && b < 1000) &&
        (100 <= c && a < 1000))
    {
        int sum = a * b * c;
        string str = to_string(sum);
        int count[10] = { 0 };

        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (str[i] == j + '0')          // 문자 -> 숫자 = 문자 - '0' / 숫자 -> 문자 = 숫자 + '0'
                {
                    count[j]++;
                }
            }
        }

        for (int i = 0; i < 10; i++)
        {
            cout << count[i] << "\n";
        }
    }

	return 0;
}