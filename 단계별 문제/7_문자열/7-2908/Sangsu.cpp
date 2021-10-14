#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    // 처리속도 UP, C의 입출력 사용안됌!
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int num1, num2;
    string str1, str2;
    string temp;

    cin >> num1 >> num2;

    str1 = to_string(num1);
    str2 = to_string(num2);

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    if (stoi(str1) > stoi(str2))
    {
        cout << str1;
    }
    else if (stoi(str1) < stoi(str2))
    {
        cout << str2;
    }


    return 0;
}