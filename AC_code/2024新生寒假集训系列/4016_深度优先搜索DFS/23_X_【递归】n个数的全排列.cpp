#include <cstdio>
#include <algorithm>

using namespace std;

int b[8];
int a[8], n;
bool v[8];

void dfs(int u) {
    if (u == n) {
        for (int i = 0; i < n; ++i) {
            printf("%d ", b[a[i]]);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= n; ++i) {
        if (!v[i - 1]) {
            a[u] = i;
            v[i - 1] = true;
            dfs(u + 1);
            v[i - 1] = false;
        }
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &b[i]);
    }
    sort(b + 1, b + n + 1);
    dfs(0);
    return 0;
}
/**************************************************************
	Problem: 23870
	Language: C++
	Result: 正确
	Time:34 ms
	Memory:1236 kb
****************************************************************/