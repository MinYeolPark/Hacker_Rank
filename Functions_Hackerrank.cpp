#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int _a, int _b, int _c, int _d)
{
    int max;
    max = _a;
    for (int i = 0; i < 4; i++)
    {
        if (max < _b)max = _b;
        if (max < _c)max = _c;
        if (max < _d)max = _d;
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}