#include <cstdio>
#include <algorithm>

using namespace std;

pair<int, int> t[110];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &t[i].first, &t[i].second);
    }
    sort(t + 1, t + n + 1, [](pair<int, int> a, pair<int, int> b) {
        return a.second == b.second ? a.first > b.first : a.second < b.second;
    });
    int cnt = 0, r = 0;
    for (int i = 1; i <= n; ++i) {
        if (t[i].first >= r) {
            r = t[i].second;
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 23838
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/