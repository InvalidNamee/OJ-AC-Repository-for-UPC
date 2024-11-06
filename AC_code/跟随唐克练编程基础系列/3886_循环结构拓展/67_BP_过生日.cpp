#include <cstdio>

int d[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool leap(int n) {
    if (n % 100 == 0) return n % 400 == 0;
    else return n % 4 == 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (leap(a)) d[1] = 29;
        else d[1] = 28;
        int ans = 0;
        for (int i = b - 1; i < 8; ++i) {
            ans += d[i];
        }
        printf("%d\n", ans - c + 1);
    }
    return 0;
}
/**************************************************************
	Problem: 1056
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
