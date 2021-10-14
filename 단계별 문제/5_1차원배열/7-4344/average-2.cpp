#include <iostream>

int main(void)
{
    using namespace std;

    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int c;

    cin >> c;

    for (int i = 0; i < c; i++)
    {
        int n;
        int sum = 0;
        double avg = 0.0;

        cin >> n;

        int* score = new int[n];

        for (int j = 0; j < n; j++)
        {
            cin >> score[j];

            sum += score[j];
        }

        avg = (double)sum / n;

        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (avg < score[j])
            {
                count++;
            }
        }

        cout << fixed;
        cout.precision(3);

        cout << (double)count / n * 100 << "%\n";

        delete[] score;
    }

    return 0;
}