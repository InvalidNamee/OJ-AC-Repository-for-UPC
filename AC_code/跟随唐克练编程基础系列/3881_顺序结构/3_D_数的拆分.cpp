#include <cstdio>

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    while (n) {
        ans += n % 10;
        n /= 10;
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 8041
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1236 kb
****************************************************************/
