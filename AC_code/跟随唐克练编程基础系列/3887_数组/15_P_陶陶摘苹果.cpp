#include <cstdio>

int a[11];

int main() {
    for (int i = 1; i <= 10; ++i) {
        scanf("%d", &a[i]);
    }
    int h, ans = 0;
    scanf("%d", &h);
    h += 30;
    for (int i = 1; i <= 10; ++i) {
        if (h >= a[i]) ans++;
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 3487
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
