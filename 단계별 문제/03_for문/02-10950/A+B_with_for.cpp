#include <iostream>

int main(void)
{
    using namespace std;

    int A, B, T;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> A >> B;

        if (0 < A && B < 10)
        {
            cout << A + B << endl;
        }
        else
        {
            cout << "Error!" << endl;
        }
    }

    return 0;
}