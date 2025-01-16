#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i & 1) printf("%d ", (i + 1) * n - j);
            else printf("%d ", i * n + j + 1);
        }
        printf("\n");
    }
    return 0;
}