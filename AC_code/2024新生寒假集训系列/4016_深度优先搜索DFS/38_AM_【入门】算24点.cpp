#include <cstdio>

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (a + b + c + d == 24 ||  a - b + c + d == 24 ||  a * b + c + d == 24 ||  a + b - c + d == 24 ||  a - b - c + d == 24 ||  a * b - c + d == 24 ||  a + b * c + d == 24 ||  a - b * c + d == 24 ||  a * b * c + d == 24 ||  a + b + c - d == 24 ||  a - b + c - d == 24 ||  a * b + c - d == 24 ||  a + b - c - d == 24 ||  a - b - c - d == 24 ||  a * b - c - d == 24 ||  a + b * c - d == 24 ||  a - b * c - d == 24 ||  a * b * c - d == 24 ||  a + b + c * d == 24 ||  a - b + c * d == 24 ||  a * b + c * d == 24 ||  a + b - c * d == 24 ||  a - b - c * d == 24 ||  a * b - c * d == 24 ||  a + b * c * d == 24 ||  a - b * c * d == 24 ||  a * b * c * d == 24) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}

/**************************************************************
	Problem: 23877
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/