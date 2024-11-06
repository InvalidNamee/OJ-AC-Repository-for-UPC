#include <cstdio>
#include <cmath>
#include <set>

using namespace std;

const int N = 100010;

int a[N], p[N];
multiset<int> s;

int main() {
    // q.push(0x3f3f3f3f);
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        a[t] = i;
    }
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        a[t] -= i;
        p[i] = t;
        s.insert(a[t]);
    }
    for (int i = 0; i < n; ++i) {
        // for (auto i : s) printf("%d ", i);
        // printf("\n");
        if (i > 0) {
            // printf("erase %d\n", a[p[i]]);
            // printf("ins %d\n", a[p[i]] + n);
            s.erase(s.find(a[p[i]]));
            s.insert(a[p[i]] - n);
        }
        auto t = s.lower_bound(-i);
        int r = abs(*t + i);
        if (t != s.begin()) r = min(r, abs(*--t + i));
        printf("%d\n", r);
    }
    return 0;
}
/**************************************************************
	Problem: 20342
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2088 kb
****************************************************************/
