//������ �´µ� codeup���� ������ �ڲ� �ð��ʰ� ���.
//�ٸ� ����� �ڵ�� �������� ���� ����ѵ� �װ� �ð��ʰ� �� �߰�
//�̰͸� ���. ����?
//+++�Ϻη� ������ ���� �ʰ� �ȶߴ� �ڵ�� �Ȱ��� �ٲ�µ��� ���� �ʰ� ��
//  ��?????????

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