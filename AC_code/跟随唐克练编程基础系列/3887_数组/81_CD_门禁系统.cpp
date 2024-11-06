#include <cstdio>

int t[1001];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int a;
        scanf("%d", &a);
        printf("%d ", ++t[a]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 1019
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:1240 kb
****************************************************************/
