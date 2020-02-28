#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%X", &n);
    int mul = 16;
    for (int i = 1; i < mul; i++)
    {
        int result = n * i;
        printf("%X*%X=%X\n", n, i, result);
    }
}