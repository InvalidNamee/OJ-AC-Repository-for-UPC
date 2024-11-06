#include <cstdio>

int a[80];

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; ++i) {
        cnt += a[i] ^ a[(i + 1) % n];
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 22573
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
