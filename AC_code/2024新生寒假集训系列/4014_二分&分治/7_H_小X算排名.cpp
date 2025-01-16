#include <cstdio>
#include <algorithm>

using namespace std;

pair<int, int> a[100010];
int ans[100010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i].first);
        a[i].second = i;
    }
    sort(a + 1, a + n + 1, [](pair<int, int> a, pair<int, int> b) {
        return a.first > b.first;
    });
    ans[a[1].second] = 1;
    for (int i = 2; i <= n; ++i) {
        if (a[i].first == a[i - 1].first) ans[a[i].second] = ans[a[i - 1].second];
        else ans[a[i].second] = i;
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
/**************************************************************
	Problem: 10444
	Language: C++
	Result: 正确
	Time:32 ms
	Memory:2408 kb
****************************************************************/