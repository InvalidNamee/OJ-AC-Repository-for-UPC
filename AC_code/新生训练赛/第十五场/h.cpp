#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b) swap(a, b);
    if (c > d) swap(c, d);
    printf("%d\n", (a >= c && b >= d || a <= c && b <= d) ? 1 : 2);
    return 0;
}