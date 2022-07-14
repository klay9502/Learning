#include <iostream>

int main(void)
{
    using namespace std;

    int score;

    cin >> score;

    if (0 <= score && score <= 100)
    {
        if (90 <= score)
        {
            cout << "A";
        }
        else if (80 <= score && score < 90)
        {
            cout << "B";
        }
        else if (70 <= score && score < 80)
        {
            cout << "C";
        }
        else if (60 <= score && score < 70)
        {
            cout << "D";
        }
        else        // score < 60
        {
            cout << "F";
        }
    }

    return 0;
}