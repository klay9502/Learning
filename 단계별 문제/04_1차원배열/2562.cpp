#include <iostream>

int main(void)
{
    using namespace std;

    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int num[9];
    int max_value = 0, max_index = 0;;

    for (int i = 0; i < 9; i++)
    {
        cin >> num[i];

        if (0 < num[i] && num[i] < 100)
        {
            if (num[i] > max_value)
            {
                max_value = num[i];
                max_index = i + 1;
            }
        }
        else
        {
            cout << "ERROR!\n";
        }
    }

    cout << max_value << "\n" << max_index;

	return 0;
}