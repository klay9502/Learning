#include <iostream>
#include <sstream>

int main(void)
{
    using namespace std;

    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int num[10] = { 0 };
    int remainder[10] = { 0 };

    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];

        if (0 <= num[i] && num[i] <= 1000)
        {
            remainder[i] = num[i] % 42;
            continue;
        }
        else
        {
            cout << "ERROR!!\n";
            break;
        }
    }

    int count = 10;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (remainder[i] == remainder[j])
            {
                count--;
                break;
            }
        }
    }

    cout << count;


	return 0;
}