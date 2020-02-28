#include <iostream>
using namespace std;

int main()
{
    int r, g, b, cnt = 0;
    scanf("%d%d%d", &r, &g, &b);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < g; j++)
            for (int k = 0; k < b; k++)
            {
                printf("%d %d %d \n", i, j, k);
                cnt++;
            }
    cout << cnt;
}