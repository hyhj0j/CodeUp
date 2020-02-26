#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double sum = a + b + c;
    cout << sum << endl;
    double avg = sum / 3;
    cout << fixed;
    cout.precision(1);
    cout << avg;
}