#include <cstdio>

int main() {
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        s += t;
    }
    if (s <= 100) printf("%d.00\n", s);
    else printf("%.2f\n", 100.0 + 0.9 * (s - 100));
    return 0;
}
/**************************************************************
	Problem: 22561
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1236 kb
****************************************************************/
