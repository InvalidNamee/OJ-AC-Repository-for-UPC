#include <unordered_set>
#include <cstdio>

using namespace std;

unordered_set<int> s;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        s.insert(t);
    }
    for (int i = 1; i <= m; ++i) {
        int t;
        scanf("%d", &t);
        if (s.find(t) != s.end()) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1299
	Language: C++
	Result: 正确
	Time:576 ms
	Memory:42120 kb
****************************************************************/