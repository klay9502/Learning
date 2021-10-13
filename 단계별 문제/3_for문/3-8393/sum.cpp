#include <iostream>

int main(void)
{
    using namespace std;

    int n;
    int sum = 0;

    cin >> n;

    if (1 <= n && n <= 10000)
    {
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
    }
    else
    {
        cout << "ERROR!!" << endl;
    }

    cout << sum;

    return 0;
}