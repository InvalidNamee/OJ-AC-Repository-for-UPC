#include <cstdio>

int n, m;

bool check(int i) {
    int a[40] = {}, l = 0;
    while (i) {
        a[++l] = i % m;
        i /= m;
    }
    for (int i = 1; i <= (l >> 1); ++i) {
        if (a[i] != a[l - i + 1]) return false;
    }
    return true;
}

int main() {
    int cnt = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        if (check(i * i)) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 10445
	Language: C++
	Result: 正确
	Time:2 ms
	Memory:1236 kb
****************************************************************/