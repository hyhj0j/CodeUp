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
    //������ �迭 0���� �ϳ��ϳ��� �ʱ�ȭ
    //�����ϸ鼭 �ʱ�ȭ�ϸ� �����Ⱚ ���´�. ����?

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
    //��翡 �°� �� �ֱ�
    //�̰� �ɱ� �ߴµ�.. �迭�ȿ� �迭�� �б� �ǳ�

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    //����Ʈ
}