#include <cstdio>
#include <iostream>

using namespace std;

int a[10010];

int main() {
    int n, m, cnt = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; ++i) {
        int l, r;
        scanf("%d%d", &l, &r);
        if (r < l) swap(l, r);
        for (int j = l; j <= r; ++j) {
            if (!a[j]) a[j] = 1;
        }
    }
    for (int i = 0; i <= n; ++i) {
        if (!a[i]) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 1637
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:2260 kb
****************************************************************/
