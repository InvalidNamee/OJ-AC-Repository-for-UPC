#include <cstdio>

int main() {
    int n, ans = 1;
    scanf("%d", &n);
    for (int i = 1; i < n; ++i) {
        ans = (ans + 1) << 1;
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 22521
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
