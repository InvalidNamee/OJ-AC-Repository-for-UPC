#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int mn = 0x3f3f3f3f, s = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            int t;
            scanf("%d", &t);
            s += t;
            if (i == j || i + j == 4) mn = mn < t ? mn : t;
        }   
    }
    printf("%d\n", 2 * (s - (2 * n - 1) * mn));
    return 0;
}
/**************************************************************
	Problem: 9844
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
