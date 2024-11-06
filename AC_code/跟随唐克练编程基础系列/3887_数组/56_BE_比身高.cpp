#include <cstdio>

int a[1000];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int x = 0, y = 0;
        for (int j = 0; j < i; ++j) x += a[j] > a[i];
        for (int j = i + 1; j < n; ++j) y += a[j] > a[i];
        cnt += x == y;
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 10145
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/
