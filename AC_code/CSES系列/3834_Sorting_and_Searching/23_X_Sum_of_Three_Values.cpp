#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

pair<long long, int> a[5010];

int main() {
    int n;
    long long s; 
    scanf("%d%lld", &n, &s);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i].first);
        a[i].second = i;
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n - 2; ++i) {
        for (int j = i + 1; j <= n - 1; ++j) {
            int l = j + 1, r = n;
            while (l < r) {
                int mid = l + r + 1 >> 1;
                if (a[mid].first <= s - a[i].first - a[j].first) l = mid;
                else r = mid - 1;
            }
            if (a[i].first + a[j].first + a[l].first == s) {
                printf("%d %d %d\n", a[i].second, a[j].second, a[l].second);
                return 0;
            }
        }
    }
    printf("IMPOSSIBLE\n");
    return 0;
}

/**************************************************************
	Problem: 22951
	Language: C++
	Result: 正确
	Time:6328 ms
	Memory:1200 kb
****************************************************************/
