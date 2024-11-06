#include <cstdio>

bool check(int x) {
    if (x % 7 == 0) return true;
    while (x) {
        if (x % 10 == 7) return true;
        x /= 10;
    }
    return false;
}

int main() {
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        if (check(i)) s += i;
    }
    printf("%d\n", s);
    return 0;
}
/**************************************************************
	Problem: 12606
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
