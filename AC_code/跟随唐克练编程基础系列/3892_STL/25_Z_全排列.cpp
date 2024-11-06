#include <cstdio>

bool f[10];
int a[10];

void dfs(int x) {
    if (x > 8) {
        for (int i = 1; i <= 8; ++i) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    for (int i = 1; i <= 8; ++i) {
        if (f[i]) continue;
        f[i] = true;
        a[x] = i;
        dfs(x + 1);
        f[i] = false;
    }
}

int main() {
    dfs(1);
    return 0;
}
/**************************************************************
	Problem: 21336
	Language: C++
	Result: 正确
	Time:33 ms
	Memory:1112 kb
****************************************************************/
