#include <iostream>
#include <sstream>

using namespace std;

int main(void)
{
    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string str;

    cin >> str;

    for (int i = 'a'; i <= 'z'; i++)
    {
        int count = -1;

        for (int j = 0; j < str.size(); j++)
        {
            if ((int)str[j] == i && count == -1)
            {
                count = j;
            }
        }

        cout << count << " ";
    }

    return 0;
}