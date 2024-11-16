#include <cstdio>
#include <cmath>
#include <bitset>

using namespace std;

int main() {
    int l;
    scanf("%d", &l);
    int n = log2(l), m = n * 2 + bitset<20>(l - (1 << n)).count();
    printf("%d %d\n", n + 1, m);
    for (int i = 1; i <= n; ++i) {
        printf("%d %d %d\n", i, i + 1, 0);
        printf("%d %d %d\n", i, i + 1, (1 << i - 1));
    }
    int t = l - (1 << n), cur = 1 << n;
    for (int i = 1; i <= n; ++i) {
        if (t >> (i - 1) & 1) {
            printf("%d %d %d\n", i, n + 1, cur);
            cur += 1 << i - 1;
        }
    }
    return 0;
}