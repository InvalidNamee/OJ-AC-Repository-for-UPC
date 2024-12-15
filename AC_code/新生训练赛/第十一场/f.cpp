#include <cstdio>

int main() {
    int n, mx = 0, s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int l;
        scanf("%d", &l);
        mx = mx > l ? mx : l;
        s += l;
    }
    s -= mx;
    if (s > mx) printf("Yes\n");
    else printf("No\n");
    return 0;
}