#include <cstdio>
#include <algorithm>

using namespace std;

pair<int, int> zom[1010];
int ans[1010], l;

int main() {
    int r, c, k, n;
    scanf("%d%d%d%d", &r, &c, &k, &n);
    for (int i = 1; i <= r; ++i) zom[i].second = i;
    for (int i = 0; i < n; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        zom[x].first--;
    }
    int s = 0;
    sort(zom + 1, zom + r + 1);
    for (int i = 1; i <= min(k, n); ++i) {
        s += zom[i].first;
        ans[l++] = zom[i].second;
    }
    printf("%d\n", -s);
    sort(ans, ans + l);
    for (int i = 0; i < l; ++i) printf("%d ", ans[i]);
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 8707
	Language: C++
	Result: 正确
	Time:16 ms
	Memory:1252 kb
****************************************************************/
