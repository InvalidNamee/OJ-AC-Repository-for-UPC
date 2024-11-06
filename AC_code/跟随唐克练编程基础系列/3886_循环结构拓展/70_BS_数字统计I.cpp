#include <cstdio>

int count(int n) {
    int res = 0;
    while (n) {
        res += n % 10 == 2;
        n /= 10;
    }
    return res;
}

int main() {
    int l, r, ans = 0;
    scanf("%d%d", &l, &r);
    for (int i = l; i <= r; ++i) {
        ans += count(i);
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 1772
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
