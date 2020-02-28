#include <iostream>
using namespace std;

int main()
{
    int h, w, n;
    cin >> h >> w;
    cin >> n;
    int l[n], d[n], x[n], y[n];

    for (int i = 0; i < n; i++)
        cin >> l[i] >> d[i] >> x[i] >> y[i];

    int m[h][w];

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            m[i][j] = 0;
        }
    }
    //이차원 배열 0으로 하나하나씩 초기화
    //선언하면서 초기화하면 쓰레기값 나온다. 왜지?

    for (int i = 0; i < n; i++)
    {
        m[x[i] - 1][y[i] - 1] = 1;
        if (d[i] == 0)
        {
            for (int k = 0; k < l[i]; k++)
                m[x[i] - 1][y[i] - 1 + k] = 1;
        }
        else
        {
            for (int k = 0; k < l[i]; k++)
                m[x[i] - 1 + k][y[i] - 1] = 1;
        }
    }
    //모양에 맞게 값 넣기
    //이게 될까 했는데.. 배열안에 배열값 읽기 되네

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    //프린트
}