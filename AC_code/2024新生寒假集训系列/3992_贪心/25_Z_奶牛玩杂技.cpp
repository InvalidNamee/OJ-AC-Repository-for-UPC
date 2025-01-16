#include <cstdio>
#include <algorithm>

using namespace std;

pair<int, int> cow[50010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &cow[i].first, &cow[i].second);
    }
    sort(cow + 1, cow + n + 1, [](pair<int, int> a, pair<int, int> b) {
        return a.first - b.second < b.first - a.second;
    });
    int res = -0x3f3f3f3f, s = 0;
    for (int i = 1; i <= n; ++i) {
        // printf("%d %d\n", cow[i].first, cow[i].second);
        res = max(res, s - cow[i].second);
        s += cow[i].first;
    }
    printf("%d\n", res);
    return 0;
}
/**************************************************************
	Problem: 22767
	Language: C++
	Result: 正确
	Time:15 ms
	Memory:1628 kb
****************************************************************/