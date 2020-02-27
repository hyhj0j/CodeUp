#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (100 <= a || a >= 90)
    {
        cout << "A" << endl;
    }
    else if (89 <= a || a >= 70)
    {
        cout << "B" << endl;
    }
    else if (69 <= a || a >= 40)
    {
        cout << "C" << endl;
    }
    else if (0 <= a || a >= 39)
    {
        cout << "D" << endl;
    }
}