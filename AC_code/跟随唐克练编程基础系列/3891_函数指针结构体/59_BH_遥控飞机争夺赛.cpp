#include <cstdio>
#include <algorithm>

using namespace std;

pair<double, int> a[10000];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i].second);
        int mn = 100, mx = 0;
        for (int j = 0; j < 5; ++j) {
            int t;
            scanf("%d", &t);
            mn = min(mn, t), mx = max(mx, t);
            a[i].first += t;
        }
        a[i].first -= mn + mx;
        a[i].first /= 3;
        a[i].first = -a[i].first;
    }
    sort(a, a + n);
    for (int i = 0; i < 3; ++i) {
        printf("%d %.3f\n", a[i].second, -a[i].first);
    }
    return 0;
}
/**************************************************************
	Problem: 22052
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1396 kb
****************************************************************/
