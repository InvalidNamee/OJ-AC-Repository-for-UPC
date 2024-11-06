#include <cstdio>

int main() {
    int n;
    double a = 0, b = 0, c = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int j, k, l;
        scanf("%d%d%d", &j, &k, &l);
        a += j, b += k, c += l;
    }
    printf("%.1f %.1f %.1f\n", a / n, b / n, c / n);
    return 0;
}
/**************************************************************
	Problem: 22613
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
