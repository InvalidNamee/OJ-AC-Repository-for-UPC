#include <cstdio>
#include <unordered_set>
#include <cmath>

using namespace std;

const size_t MOD = 1000000000000000007;
unordered_set<size_t> s;
size_t p[20];
bool v[20];
int a[20], n;
bool f;

bool prime(int n) {
    int l = sqrt(n);
    for (int i = 2; i <= l; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void dfs(int u, size_t H) {
    if (u == n + 1) {
        if (prime(a[1] + a[n])) {
            H += p[a[1] - 1] * a[n];
            H %= MOD;
            if (s.find(H) != s.end()) return;
            s.insert(H);
            f = true;
            for (int i = 1; i <= n; ++i) {
                printf("%d ", a[i]);
            }
            printf("\n");
        }
        return;
    }
    for (int i = 1; i <= n; ++i) {
        if (!v[i] && prime(i + a[u - 1])) {
            a[u] = i;
            v[i] = true;
            dfs(u + 1, (H + p[i - 1] * a[u - 1]) % MOD);
            v[i] = false;
        }
    }
}

int main() {
    scanf("%d", &n);
    p[0] = 1;
    for (int i = 1; i < n; ++i) {
        p[i] = p[i - 1] * n;
        p[i] %= MOD;
    }
    dfs(1, 0);
    if (!f) printf("no answer\n");
    return 0;
}
/**************************************************************
	Problem: 13854
	Language: C++
	Result: 正确
	Time:862 ms
	Memory:4556 kb
****************************************************************/