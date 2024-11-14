#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

pair<pair<int, int>, int> a[200010];
int ans[200010];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;

int main() {
    int n, tot = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &a[i].first.first, &a[i].first.second);
        a[i].second = i;
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; ++i) {
        if (q.empty() || a[i].first.first <= q.top().first) {
            q.push({a[i].first.second, ++tot});
            ans[a[i].second] = tot;
        }
        else {
            auto tp = q.top();
            q.pop();
            ans[a[i].second] = tp.second;
            q.push({a[i].first.second, tp.second});
        }
    }
    printf("%d\n", tot);
    for (int i = 1; i <= n; ++i) {
        printf("%d ", ans[i]);
    }
    printf("\n");
    return 0;
}

/**************************************************************
	Problem: 23029
	Language: C++
	Result: 正确
	Time:2211 ms
	Memory:8228 kb
****************************************************************/
