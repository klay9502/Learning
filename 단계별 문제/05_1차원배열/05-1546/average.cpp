#include <iostream>

int main(void)
{
    using namespace std;

    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;

    int max = 0;
    double sum = 0.0;
    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum += (double)arr[i] / max * 100;
    }

    cout << sum / n << "\n";

    delete[] arr;

	return 0;
}