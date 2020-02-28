#include <iostream>
using namespace std;
int main()
{
    int n, x, y;
    int m[19][19] = {};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        m[x - 1][y - 1] = 1;
    }
    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}