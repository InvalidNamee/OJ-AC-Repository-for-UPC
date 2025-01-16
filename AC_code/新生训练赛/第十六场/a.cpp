#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> a[1010];
vector<int> ans;

int main() {
    int r, c, k, n;
    scanf("%d%d%d%d", &r, &c, &k, &n);
    for (int i = 1; i <= r; ++i) {
        a[i].second = i;
    }
    for (int i = 1; i <= n; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        a[x].first--;
    }
    sort(a + 1, a + r + 1);
    int tot = 0;
    for (int i = 1; i <= k; ++i) {
        tot -= a[i].first;
    }
    printf("%d\n", tot);
    for (int i = 1; i <= k; ++i) {
        ans.push_back(a[i].second);
    }
    sort(ans.begin(), ans.end());
    for (auto i : ans) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}