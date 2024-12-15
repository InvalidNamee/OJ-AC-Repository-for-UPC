#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int x[110], y[110], al[110];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d%d", &x[i], &y[i], &al[i]);
    }
    for (int i = 0; i <= 100; ++i) {
        for (int j = 0; j <= 100; ++j) {
            int mx = 0, h = 0;
            bool f = false;
            for (int k = 1; k <= n; ++k) {
                if (al[k]) {
                    h = abs(i - x[k]) + abs(j - y[k]) + al[k];
                    break;
                }
            }
            for (int k = 1; k <= n; ++k) {
                if (al[k] != max(h - abs(i - x[k]) - abs(j - y[k]), 0)) {
                    f = true;
                    break;
                }
            }
            if (!f) {
                printf("%d %d %d\n", i, j, h);
                return 0;
            }
        }
    }
    return 0;
}