#include <iostream>
#include <sstream>

using namespace std;

int main(void)
{
    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int r;
        cin >> r;

        string str;
        cin >> str;

        for (int j = 0; j < str.size(); j++)
        {
            for (int k = 0; k < r; k++)
            {
                cout << str[j];
            }
        }

        cout << "\n";
    }

    return 0;
}