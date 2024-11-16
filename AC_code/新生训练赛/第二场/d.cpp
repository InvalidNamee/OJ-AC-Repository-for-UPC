#include <cstdio>

class FenwickTree {
    bool val[1000010];
    int n;
public:
    void setlen(int n) {
        this->n = n;
    }
    void modify(int u) {
        for (; u <= n; u += u & -u) {
            val[u] ^= 1;
        }
    }
    bool query(int u) {
        bool res = 0;
        for (; u; u -= u & -u) {
            res ^= val[u];
        }
        return res;
    }
} tr;
bool a[1000010];

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    tr.setlen(n);
    for (int i = 1; i <= n; ++i) {
        scanf("%1d", &a[i]);
        if ((a[i] ^ a[i - 1])) tr.modify(i);
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (!tr.query(i)) continue;
        else if (i + k - 1 > n) {
            printf("so hard\n");
            return 0;
        }
        else {
            tr.modify(i);
            tr.modify(i + k);
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}