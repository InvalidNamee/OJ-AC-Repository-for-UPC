#include <cstdio>
#include <iostream>

using namespace std;

int a[2010];

int main() {
    int n, z, w;
    scanf("%d%d%d", &n, &z, &w);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    if (n == 1) printf("%d\n", abs(a[1] - w));
    else {
        printf("%d\n", max(abs(a[n] - w), abs(a[n - 1] - a[n])));
    }
    return 0;
}