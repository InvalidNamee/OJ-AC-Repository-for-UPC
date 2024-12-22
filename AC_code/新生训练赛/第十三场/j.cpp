#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, l, res = 0;
    scanf("%d%d", &n, &l);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        res = max(res, min(t, l - t));
    }
    printf("%d\n", res);
    return 0;
}