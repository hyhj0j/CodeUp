#include <iostream>
using namespace std;

int main()
{
    int h, b, c, s;
    double result;
    cin >> h >> b >> c >> s;
    result = ((((double)h * b * c * s) / 8) / 1024) / 1024;
    cout << fixed;
    cout.precision(1);
    cout << result << " MB";
}

// ���� �� ���� ����� �� ����
// ===> double �� ��ȯ

// double �� ��ȯ�� result ��� �Ѱ��� �ߴ��� ����� �� ����
// ===>h*b*c*s ���� �� �� ��ȯ �ϴ� �ٸ� �� ����