#include <cstdio>

int main() {
    int l, ans = 0;
    scanf("%d", &l);
    for (int i = 1; i <= l / 2; ++i) {
        for (int j = i; i < (l - i - j) && j <= (l - i - j); ++j) {
            if (2 * (i + j) > l) ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 22522
	Language: C++
	Result: 正确
	Time:117 ms
	Memory:1236 kb
****************************************************************/
