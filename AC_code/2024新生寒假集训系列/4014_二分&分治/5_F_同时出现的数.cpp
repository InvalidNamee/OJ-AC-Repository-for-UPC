#include <cstdio>
#include <unordered_set>
#include <algorithm>

using namespace std;

unordered_set<int> s;
int ans[100010], l;

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
        if (s.find(t) != s.end()) {
            ans[++l] = t;
        }
    }
    sort(ans + 1, ans + l + 1);
    for (int i = 1; i <= l; ++i) {
        printf("%d ", ans[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22794
	Language: C++
	Result: 正确
	Time:55 ms
	Memory:3024 kb
****************************************************************/