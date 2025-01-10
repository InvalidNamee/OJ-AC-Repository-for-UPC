#include <cstdio>
#include <iostream>

using namespace std;

const int N = 100010;
int t[N];

int main() {
    int n, m, l, r;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; ++i) {
        scanf("%d", &r);
        if (i > 1) {
            t[min(l, r)]++;
            t[max(l, r)]--;
        }
        l = r;
    }
    for (int i = 1; i < n; ++i) {
        t[i] += t[i - 1];
        // printf("%d ", t[i]);
    }
    // printf("\n");
    long long s = 0;
    for (int i = 1; i < n; ++i) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        s += min((long long)a * t[i], (long long)b * t[i] + c);
    }
    printf("%lld\n", s);
    return 0;
}