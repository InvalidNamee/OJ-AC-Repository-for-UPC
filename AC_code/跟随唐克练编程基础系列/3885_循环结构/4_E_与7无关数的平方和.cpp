#include <cstdio>

bool check(int n) {
    return n % 7 != 0 && n % 10 != 7 && n / 10 != 7;
}

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        if (check(i)) ans += i * i;
    
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 8668
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
