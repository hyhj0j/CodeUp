#include <iostream>
using namespace std;

int main()
{
    int a, b, c, result;
    cin >> a >> b >> c;
    result = (a > b ? b : a) < c ? (a > b ? b : a) : c;
    cout << result;
}