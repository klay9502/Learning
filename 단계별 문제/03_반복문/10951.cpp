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