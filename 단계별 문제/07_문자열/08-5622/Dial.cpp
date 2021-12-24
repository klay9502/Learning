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

    string str;
    int time = 0, sum = 0;
    int* dial = new int[] {
        3, 3, 3,        // A B C
        4, 4, 4,        // D E F
        5, 5, 5,        // G H I
        6, 6, 6,        // J K L
        7, 7, 7,        // M N O
        8, 8, 8, 8,     // P Q R S
        9, 9, 9,        // T U V
        10, 10, 10, 10      // W X Y Z
    };

    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        sum += dial[(int)str[i] - 65];
    }

    cout << sum;
    
    delete[] dial;

    return 0;
}
