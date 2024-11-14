#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

pair<long long, int> a[1010];
pair<long long, pair<int, int>> b[1000010];

bool check(int a[]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (a[i] == a[j]) return false;
        }
    }
    return true;
}

int main() {
    int n, m = 0;
    long long s; 
    scanf("%d%lld", &n, &s);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i].first);
        a[i].second = i;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            b[++m] = {a[i].first + a[j].first, {a[i].second, a[j].second}};
        }
    }
    sort(b + 1, b + m + 1);
    for (int i = 1; i < m; ++i) {
        int l = i + 1, r = m;
        while (l < r) {
            int mid = l + r >> 1;
            if (b[mid].first >= s - b[i].first) r = mid;
            else l = mid + 1;
        }
        if (b[i].first + b[l].first == s) {
            int t[] = {b[i].second.first, b[i].second.second, b[l].second.first, b[l].second.second};
            if (check(t)) {
                printf("%d %d %d %d\n", b[i].second.first, b[i].second.second, b[l].second.first, b[l].second.second);
                return 0;
            }
            l ++;
            while (b[l].first == b[l - 1].first) {
                int t[] = {b[i].second.first, b[i].second.second, b[l].second.first, b[l].second.second};
                if (check(t)) {
                    printf("%d %d %d %d\n", b[i].second.first, b[i].second.second, b[l].second.first, b[l].second.second);
                    return 0;
                }
                l ++;
            }
        }
    }
    printf("IMPOSSIBLE\n");
    return 0;
}

/**************************************************************
	Problem: 23033
	Language: C++
	Result: 正确
	Time:3869 ms
	Memory:16768 kb
****************************************************************/
