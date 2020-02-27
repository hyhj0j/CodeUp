#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, sum = 0;
    cin >> n;
    do
    {
        i++;
        sum += i;
    } while (sum < n);

    cout << i;
}