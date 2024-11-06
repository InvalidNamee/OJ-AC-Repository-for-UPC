#include <cstdio>
#include <map>

using namespace std;

map<int, bool> mp[51];

int main() {
    // freopen("input", "r", stdin);
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        for (int j = 0; j < t; ++j) {
            int tt;
            scanf("%d", &tt);
            mp[i][tt] = true;
        }
    }
    int q;
    scanf("%d", &q);
    while (q--) {
        int x, y;
        scanf("%d%d", &x, &y);
        int a = 0, b = 0;
        for (auto i : mp[y]) {
            if (mp[x].find(i.first) != mp[x].end()) a++;
            else b++;
        }
        b += mp[x].size();
        printf("%.2f%%\n", 100.0 * (double)a / b);
    }
    return 0;
}
/**************************************************************
	Problem: 18464
	Language: C++
	Result: 正确
	Time:2535 ms
	Memory:24804 kb
****************************************************************/
