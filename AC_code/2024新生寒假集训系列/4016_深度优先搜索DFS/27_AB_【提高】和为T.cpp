#include <cstdio>
#include <algorithm>

using namespace std;

long long a[30], t;
int n, cnt;
bool ch[30];

void dfs(int u) {
    if (u == 0) {
        long long s = 0;
        bool f = false;
        for (int i = 1; i <= n; ++i) {
            if (ch[i]) {
                f = true;
                s += a[i];
            }
        }
        if (s == t && f) {
            cnt++;
            for (int i = 1; i <= n; ++i) {
                if (ch[i])
                    printf("%lld ", a[i]);
            }
            printf("\n");
        }
        return;
    }
    dfs(u - 1);
    ch[u] = true;
    dfs(u - 1);
    ch[u] = false;
}


int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
    }
    scanf("%lld", &t);
    dfs(n);
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 23872
	Language: C++
	Result: 正确
	Time:322 ms
	Memory:1236 kb
****************************************************************/