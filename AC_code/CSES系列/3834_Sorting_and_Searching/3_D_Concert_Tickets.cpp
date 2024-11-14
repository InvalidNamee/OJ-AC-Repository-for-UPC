#include <cstdio>
#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

multiset<int> s;

int main() {
    // freopen("data", "r", stdin);
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        s.insert(t);
    }
    while (m --) {
        int t;
        scanf("%d", &t);
        if (s.empty()) printf("-1\n");
        else if (t < *s.begin()) printf("-1\n");
        else {
            auto ans = --s.upper_bound(t);
            printf("%d\n", *ans);
            s.erase(ans);
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23014
	Language: C++
	Result: 正确
	Time:2255 ms
	Memory:11404 kb
****************************************************************/
