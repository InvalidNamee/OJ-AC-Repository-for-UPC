#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <bitset>
 
using namespace std;

int x[410], y[410];

bool check(bitset<25> q) {
    bitset<25> qq = q;
    qq.flip();
    return (q & qq).none();
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, m;
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= m; ++i) {
            scanf("%d%d", &x[i], &y[i]);
        }
        bool f = true;
        for (int i = 0; i < (1 << n); ++i) {
            bitset<25> q(i);
            for (int j = 1; j <= m; ++j) {
                if (q[x[j] - 1] && !q[y[j] - 1]) q[x[j] - 1] = 0, q[y[j] - 1] = 1;
            }
            for (int j = 0; j < n - 1; ++j) {
                if (q[j] > q[j + 1]) {
                    f = false;
                    break;
                }
            }
            if (!f) break;
        }
        if (f) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
