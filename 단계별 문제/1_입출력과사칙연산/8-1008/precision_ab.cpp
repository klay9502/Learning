#include <iostream>

int main(void)
{
    double a, b;

    std::cin >> a >> b;

    if (0 < a && b < 10)
    {
        std::cout.precision(10);        // (정수포함) 전체 10자리 표현

        std::cout << a / b;
    }

    return 0;
}