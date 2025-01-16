#include <cstdio>
#include <cmath>

using namespace std;

bool v[22], p[100], vis[100];
int a[22], n;
int cnt;

bool prime(int n) {
    if (vis[n]) return p[n];
    vis[n] = true;
    int l = sqrt(n);
    for (int i = 2; i <= l; ++i) {
        if (n % i == 0) return p[n] = false;
    }
    return p[n] = true;
}

bool dfs(int u) {
    if (u == n + 1) {
        if (prime(a[1] + a[n])) {
            cnt++;
            for (int i = 1; i <= n; ++i) {
                printf("%d ", a[i]);
            }
            printf("\n");
        }
        return cnt == 10;
    }
    for (int i = 1; i <= n; ++i) {
        if (!v[i] && prime(i + a[u - 1])) {
            a[u] = i;
            v[i] = true;
            if (dfs(u + 1)) return true;
            v[i] = false;
        }
    }
    return false;
}

int main() {
    scanf("%d", &n);
    if (n & 1) return 0;
    a[1] = 1;
    v[1] = true;
    dfs(2);
    // if (!cnt) printf("no answer\n");
    return 0;
}
/**************************************************************
	Problem: 23871
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/