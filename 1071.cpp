#include <iostream>
using namespace std;

int main()
{
    int a;
label:
    cin >> a;

    if (a != 0)
    {
        cout << a << endl;
        goto label;
    }
}
