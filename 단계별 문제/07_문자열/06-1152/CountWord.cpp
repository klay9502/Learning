#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(void)
{
    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    char* str = new char[1000000];
    int count = 1;

    cin.getline(str, 1000000, '\n');

    for (int i = 0; ; i++)
    {
        if (str[i] == 32 && i != 0)       // 스페이스바 아스키코드
        {
            count++;
        }

        if (str[i] == '\0')
        {
            if (str[i - 1] == 32)
            {
                count--;
            }
            break;
        }
    }

    cout << count;

    delete[] str;

    return 0;
}