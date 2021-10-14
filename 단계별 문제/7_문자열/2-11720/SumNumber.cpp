#include <iostream>
#include <sstream>

using namespace std;

int main(void)
{
    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int sum = 0;

    cin >> n;

    char* arr = new char[n];

    cin >> arr;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i] - '0';
    }

    cout << sum;

    return 0;
}