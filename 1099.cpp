#include <iostream>
using namespace std;

int main()
{
    int m[10][10];
    int ant = 9;
    int x = 1, y = 1;

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
        {
            cin >> m[i][j];
        }

    while (m[x][y] != 2)
    {
        m[x][y] = ant;
        if (m[x][y + 1] != 1)
        {
            y++;
        }
        else if (m[x + 1][y] != 1)
        {
            x++;
        }
        else
        {
            break;
        }
    }

    m[x][y] = ant;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}