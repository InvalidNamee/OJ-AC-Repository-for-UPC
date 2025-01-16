#include <cstdio>
#include <set>

using namespace std;

int a[50010];
multiset<int> b;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) scanf("%d", &a[i]);
    for (int i = 1; i <= m; ++i) {
        int t;
        scanf("%d", &t);
        b.insert(t);
    }
    int s = 0;
    for (int i = 1; i <= n; ++i) {
        auto t = b.lower_bound(a[i]);
        if (t == b.end()) {
            printf("-1\n");
            return 0;
        }
        else {
            s += *t;
            b.erase(t);
        }
    }
    printf("%d\n", s);
    return 0;
}
/**************************************************************
	Problem: 10251
	Language: C++
	Result: 正确
	Time:30 ms
	Memory:3876 kb
****************************************************************/