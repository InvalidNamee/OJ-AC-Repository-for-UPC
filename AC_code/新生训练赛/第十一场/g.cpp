#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

int a[100010];
priority_queue<int, vector<int>, greater<int>> q;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a + m);
    for (int i = 1; i < m; ++i) {
        q.push(a[i] - a[i - 1]);
    }
    if (m <= n) printf("0\n");
    else {
        int ans = 0;
        for (int i = 0; i < m - n; ++i) {
            ans += q.top();
            q.pop();
        }
        printf("%d\n", ans);
    }
    return 0;
}