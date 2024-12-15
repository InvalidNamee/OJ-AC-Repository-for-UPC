#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int mx = 0, s = 0;
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        mx = mx > t ? mx : t;
        s += t;
    }
    printf("%d\n", s - mx / 2);
    return 0;
}