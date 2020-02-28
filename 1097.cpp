//정답은 맞는데 codeup에서 돌리면 자꾸 시간초과 뜬다.
//다른 사람들 코드랑 비교했을때 거의 비슷한데 그건 시간초과 안 뜨고
//이것만 뜬다. 왜지?
//+++일부러 변수명 빼고 초과 안뜨는 코드랑 똑같이 바꿨는데도 내껀 초과 뜸
//  왜?????????

#include <iostream>
using namespace std;

int main()
{
    int n;
    int x, y;
    int m[19][19];

    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            cin >> m[i][j];
        }
    }

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        for (int j = 0; i < 19; j++)
        {
            if (m[x - 1][j] == 1)
                m[x - 1][j] = 0;
            else
                m[x - 1][j] = 1;
        }
        for (int k = 0; i < 19; k++)
        {
            if (m[k][y - 1] == 1)
                m[k][y - 1] = 0;
            else
                m[k][y - 1] = 1;
        }
    }

    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            cout << m[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}