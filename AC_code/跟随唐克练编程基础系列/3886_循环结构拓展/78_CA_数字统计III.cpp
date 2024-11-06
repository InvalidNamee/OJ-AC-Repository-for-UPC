#include <cstdio>

bool check(int n) {
    while (n) {
        if (n % 10 == 8) return true;
        n /= 10;
    }
    return false;
}

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        if (check(i)) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 9683
	Language: C++
	Result: 正确
	Time:129 ms
	Memory:1236 kb
****************************************************************/
