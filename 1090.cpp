#include <iostream>
using namespace std;

int main()
{
    int a, r, n;
    cin >> a >> r >> n;
    long long int result = r;
    for (int i = 1; i < n - 1; i++)
    {
        result *= r;
    }

    result *= a;
    cout << result;
}