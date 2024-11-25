#include <cstdio>
#include <queue>

using namespace std;

priority_queue<int> q;

signed main() {
    int n, h;
    int cnt = 0;
    scanf("%d%d", &n, &h);
    for (int i = 1; i <= n; ++i) {
        int a, b;
        scanf("%d%d", &a, &b);
        q.push(a);
        h -= a;
        if (h <= 0) {
            h += a;
            cnt++;
        }
        // if (h <= 0) {
        //     cnt++;
        //     h += q.top();
        //     q.pop();
        // }
        h += b;
    }
    printf("%d\n", cnt);
    return 0;
}
