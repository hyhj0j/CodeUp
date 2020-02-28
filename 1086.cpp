#include <iostream>
using namespace std;

int main()
{
    int w, h, b;
    double result;
    cin >> w >> h >> b;
    result = ((((double)w * h * b) / 8) / 1024) / 1024;
    cout << fixed;
    cout.precision(2);
    cout << result << " MB";
}