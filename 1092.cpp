#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max, result;
    cin >> a >> b >> c;
    max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
    cout << max << endl;

    for (int day = 1; day < max; day++)

        if (a % day == 0 && b % day == 0)
        {
            if (c % day == 0)
                result = (a / day) * (b / day) * (c / day);
            cout << result;
        }
}