#include <cstdio>
#include <cstring>

int a[110], b[110];

int main() {
    for (int n = 1; n <= 50; ++n) {
        for (int i = 1; i <= n * 2; ++i) {
            a[i] = i;
        }
        int t = 0;
        while (true) {
            t++;
            for (int i = 1; i <= n; ++i) {
                b[i * 2] = a[i];
            }
            for (int i = 1; i <= n; ++i) {
                b[i * 2 - 1] = a[i + n];
            }
            memcpy(a, b, sizeof(b));
            bool f = false;
            for (int i = 1; i <= n * 2; ++i) {
                if (a[i] != i) {
                    f = true;
                    break;
                }
            }
            if (!f) break;
        }
        printf("%d\n", t);
    }
    return 0;
}