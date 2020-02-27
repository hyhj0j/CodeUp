#include <iostream>
using namespace std;

int main()
{
    int n, a, cnt = 0;
    cin >> n;
here:
    cin >> a;
    cout << a << endl;
    cnt++;
    if (n != cnt)
        goto here;
}