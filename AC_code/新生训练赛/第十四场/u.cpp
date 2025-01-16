#include <cstdio>
#include <queue>

using namespace std;

int s[200010];
priority_queue<int> q;

int main() {
    int k, n;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        s[t]++;
    }
    for (int i = 1; i <= n; ++i) {
        if (s[i]) q.push(s[i]);
    }
    int cnt = 0;
    for (int i = 0; i < k; ++i) {
        if (q.empty()) break;
        cnt += q.top();
        q.pop();
    }
    printf("%d\n", n - cnt);
    return 0;
}