#include <cstdio>

int arr[110][110];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }
    int x, y;
    int s = 0;
    scanf("%d%d", &x, &y);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i - j == x - y) s += arr[i][j];
        }
    }
    printf("%d\n", s);
    return 0;
}