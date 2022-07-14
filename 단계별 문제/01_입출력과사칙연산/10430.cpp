#include <iostream>

int main(void)
{
    int A, B, C;

    std::cin >> A >> B >> C;

    if (2 <= A && A <= 10000 &&
        2 <= B && B <= 10000 &&
        2 <= C && C <= 10000)
    {
        std::cout << (A + B) % C << std::endl;
        std::cout << ((A % C) + (B % C)) % C << std::endl;
        std::cout << (A * B) % C << std::endl;
        std::cout << ((A % C) * (B % C)) % C;
    }
    else
    {
        std::cout << "Error!";
    }

    return 0;
}