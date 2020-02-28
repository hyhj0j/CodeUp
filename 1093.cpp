#include <iostream>
using namespace std;
int main()
{
    int n, max = 23;
    cin >> n;
    int m[n] = {};
    int cnt[max] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
        for (int j = 1; j <= max; j++)
        {
            if (m[i] == j)
                cnt[j - 1] += 1;
        }
    }
    for (int i = 0; i < max; i++)
    {
        cout << cnt[i] << " ";
    }
}