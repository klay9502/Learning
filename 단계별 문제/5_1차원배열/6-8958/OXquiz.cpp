#include <iostream>

int main(void)
{
    using namespace std;

    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;

    string* test = new string[n];

    for (int i = 0; i < n; i++)
    {
        int total = 0;
        int score = 0;

        cin >> test[i];

        for (int j = 0; j < test[i].size(); j++)
        {
            if (test[i][j] == 'O')
            {
                score++;
            }
            else if (test[i][j] == 'X')
            {
                score = 0;
            }

            total += score;
        }

        cout << total << "\n";
    }

    delete[] test;

    return 0;
}