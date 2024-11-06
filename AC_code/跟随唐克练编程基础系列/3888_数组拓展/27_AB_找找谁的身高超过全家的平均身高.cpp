#include <cstdio>

int a[11];

int main() {
    int n;
    double s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        s += a[i];
    }
    s /= n;
    printf("AVE=%.1f\n", s);
    for (int i = 0; i < n; ++i) {
        if (a[i] > s) {
            printf("%d:%d ", i + 1, a[i]);
        }
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22564
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:1236 kb
****************************************************************/
