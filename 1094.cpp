#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k[n];
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << k[i] << " ";
    }
}