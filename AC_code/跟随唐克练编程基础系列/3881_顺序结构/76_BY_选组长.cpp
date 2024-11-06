#include <cstdio>

int main() {
    int a[4];
    long long ans = 0;
    for (int i = 0; i < 4; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < i; ++j) {
            ans += (long long)a[i] * a[j];
        }
    }
    printf("%lld\n", ans);
    return 0;
}

/**************************************************************
	Problem: 13912
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
