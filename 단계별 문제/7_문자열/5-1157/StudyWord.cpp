#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

int main(void)
{
    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string str;
    char result = NULL;
    bool bIsOverlap = false;
    int max = -1;
    int* count = new int[26];       // 알파벳 개수 26
    memset(count, 0, 26 * sizeof(int));
    
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if ((int)str[i] == ('A' + j) || (int)str[i] == ('A' + 32 + j))
            {
                count[j]++;

                if (count[j] > max)
                {
                    max = count[j];
                }
            }
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (bIsOverlap && count[i] == max)
        {
            result = '?';
            break;
        }

        if (!bIsOverlap && count[i] == max)
        {
            bIsOverlap = true;
            result = (char)('A' + i);
        }
    }

    cout << result;

    delete[] count;

    return 0;
}