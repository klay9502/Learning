#include <iostream>

int main(void)
{
    using namespace std;

    int n;
    
    cin >> n;

    if (1 < n && n <= 9)
    {
        for (int i = 1; i <= 9; i++)
        {
            cout << n << " * " << i << " = " << n * i << endl;
        }
    }

    return 0;
}