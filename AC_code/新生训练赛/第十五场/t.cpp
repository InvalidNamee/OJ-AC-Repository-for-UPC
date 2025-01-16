#include <cstdio>

int main() {
    int n, mx = 0, mn = 100, s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        mx = mx < t ? t : mx;
        mn = mn > t ? t : mn;
        s += t;
    }
    printf("%.2f\n", double(s - mx - mn) / (n - 2));
    return 0;
}