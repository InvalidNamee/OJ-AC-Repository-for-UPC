#include <map>
#include <cstdio>

using namespace std;

map<int, int> mp;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        int k;
        scanf("%d", &k);
        for (int j = 1; j <= k; ++j) {
            int t;
            scanf("%d", &t);
            mp[t]++;
        }
    }
    int cnt = 0;
    for (auto i : mp) {
        if (i.second == n) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
