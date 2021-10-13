#include <iostream>

int main(void)
{
    int A, B;

    std::cin >> A >> B;

    if (-10000 <= A && A <= 10000 &&
        -10000 <= B && B <= 10000)
    {
        if (A > B)
            std::cout << ">";
        else if (A < B)
            std::cout << "<";
        else      // A == B
            std::cout << "==";
    }
    else
    {
        std::cout << "Error!" << std::endl;
    }

    return 0;
}