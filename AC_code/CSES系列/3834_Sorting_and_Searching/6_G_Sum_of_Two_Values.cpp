#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

pair<int, int> a[200010];

int main() {
    int n, s;
    scanf("%d%d", &n, &s);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i].first);
        a[i].second = i;
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i < n; ++i) {
        if (a[i].first > s) break;
        int t = s - a[i].first;
        int l = i + 1, r = n;
        while (l < r) {
            int mid = l + r + 1 >> 1;
            if (a[mid].first > t) r = mid - 1;
            else l = mid;
        }
        if (a[l].first == t) {
            printf("%d %d\n", a[i].second, a[l].second);
            return 0;
        }
    }
    printf("IMPOSSIBLE\n");
    return 0;
}
/**************************************************************
	Problem: 22949
	Language: C++
	Result: 正确
	Time:1244 ms
	Memory:3588 kb
****************************************************************/
