#include <cstdio>

bool check(int x) {
    if (x & 1) return false;
    int cnt = 0;
    while (x) {
        cnt++;
        if (x % 10 & 1) return false;
        x /= 10;
    }
    return cnt % 2 == 0;
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int x;
        scanf("%d", &x);
        if (check(x)) printf("%d\n", x);
    }
    return 0;
}
/**************************************************************
	Problem: 22557
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
