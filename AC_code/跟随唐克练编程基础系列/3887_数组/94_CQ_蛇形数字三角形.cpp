#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int h = 0;
    for (int i = 1; i <= n; ++i) {
        h += i;
        int t = h;
        printf("%5d", h);
        for (int j = i; j < n; ++j) {
            printf("%5d", t = t + j);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 3268
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
