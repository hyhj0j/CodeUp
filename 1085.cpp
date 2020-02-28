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

// 연산 후 값이 제대로 안 나옴
// ===> double 형 변환

// double 형 변환을 result 결과 총값에 했더니 제대로 안 나옴
// ===>h*b*c*s 연산 후 형 변환 하니 바른 값 나옴