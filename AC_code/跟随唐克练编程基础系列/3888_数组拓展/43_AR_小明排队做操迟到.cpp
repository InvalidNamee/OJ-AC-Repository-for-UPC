#include <cstdio>

int main() {
    int n, x, y;
    scanf("%d%d%d", &n, &x, &y);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        printf("%d ", t);
        if (t == x) printf("%d ", y);
    }
    printf("\n");
    return 0;
}

/**************************************************************
	Problem: 22580
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1236 kb
****************************************************************/
