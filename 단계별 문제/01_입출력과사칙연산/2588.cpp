﻿#include <iostream>

int main(void)
{
    int A, B;

    std::cin >> A >> B;

    std::cout << A * (B % 10) << std::endl;
    std::cout << A * ((B % 100) / 10) << std::endl;
    std::cout << A * ((B - (B % 100)) / 100) << std::endl;
    std::cout << A * B;

    return 0;
}