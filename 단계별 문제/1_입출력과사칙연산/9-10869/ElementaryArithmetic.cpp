#include <iostream>

int main(void)
{
    int A, B;

    std::cin >> A >> B;

    if (1 <= A && B <= 10000)
    {
        std::cout << A + B << std::endl;
        std::cout << A - B << std::endl;
        std::cout << A * B << std::endl;
        std::cout << A / B << std::endl;
        std::cout << A % B;
    }
    else
    {
        std::cout << "Error!";
    }

    return 0;
}