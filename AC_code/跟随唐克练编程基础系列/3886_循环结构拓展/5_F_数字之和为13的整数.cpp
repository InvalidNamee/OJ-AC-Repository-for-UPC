#include <cstdio>

bool check(int n) {
    int s = 0;
    while (n) {
        s += n % 10;
        n /= 10;
    }
    return s == 13;
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
	Problem: 22434
	Language: C++
	Result: 正确
	Time:84 ms
	Memory:1236 kb
****************************************************************/
