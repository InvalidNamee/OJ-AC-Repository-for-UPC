#include <cstdio>
#include <climits>
#include <iostream>

using namespace std;

int main() {
    int n, m, x, y, mx = INT_MIN, mn = INT_MAX;
    scanf("%d%d%d%d", &n, &m, &x, &y);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        mx = max(mx, t);
    }
    for (int i = 0; i < m; ++i) {
        int t;
        scanf("%d", &t);
        mn = min(mn, t);
    }
    if (mx < mn && mx < y && mn > x) printf("No War\n");
    else printf("War\n");
    return 0;
}