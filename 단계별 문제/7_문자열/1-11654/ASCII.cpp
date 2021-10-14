#include <iostream>
#include <sstream>

using namespace std;

int main(void)
{
    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    char input;

    cin >> input;

    cout << (int)input;

    return 0;
}