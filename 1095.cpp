#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k[n];
    int min;
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }
    min = k[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (k[i] <= min)
        {
            min = k[i];
        }
    }
    cout << min;
}