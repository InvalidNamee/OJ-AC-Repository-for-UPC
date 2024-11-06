#include <cstdio>

int mark[100010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; ++i) {
        if (!mark[i]) {
            for (int j = 2; i * j <= n; ++j) {
                mark[i * j] = true;
            }
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 10160
	Language: C++
	Result: 正确
	Time:2 ms
	Memory:1628 kb
****************************************************************/
