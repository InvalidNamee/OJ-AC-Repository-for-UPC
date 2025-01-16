#include <cstdio>
#include <algorithm>

using namespace std;

int l, c;
char a[30], b[30];

void dfs(int u, int ls) {
    if (u == l + 1) {
        int cnt = 0;
        for (int i = 1; i <= l; ++i) {
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
                cnt++;
        }
        if (cnt >= 1 && (l - cnt) >= 2) {
            a[u] = 0;
            printf("%s\n", a + 1);
        }
        return;
    }
    for (int i = ls; i <= c; ++i) {
        a[u] = b[i];
        dfs(u + 1, i + 1);
    }
}


int main() {
    scanf("%d%d", &l, &c);
    for (int i = 1; i <= c; ++i) {
        char s[2];
        scanf("%s", s);
        b[i] = s[0];
    }
    sort(b + 1, b + c + 1);
    dfs(1, 1);
    return 0;
}
/**************************************************************
	Problem: 14182
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/