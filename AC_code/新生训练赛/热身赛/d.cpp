#include <cstdio>
#include <queue>

using namespace std;

priority_queue<int> q;

int main() {
    int n, m, w;
    scanf("%d%d%d", &n, &m, &w);
    for (int i = 1; i <= n; ++i) {
        int c;
        scanf("%d", &c);
        q.push(c);
    }
    long long ans = 0;
    while (!q.empty()) {
        long long s = 0;
        for (int i = 0; i < m; ++i) {
            s += q.top();
            q.pop();
            if (q.empty()) break;
        }
        ans += min(s, (long long)w);
    }
    printf("%lld\n", ans);
    return 0;
}