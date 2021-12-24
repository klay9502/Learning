// 본 문제는 EOF에 대한 이해도를 시험하는 문제이다.

#include <iostream>

int main(void)
{
    using namespace std;

    int a, b;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (0 < a && b < 10)
        {
            cout << a + b << "\n";
        }
    }

    return 0;
}