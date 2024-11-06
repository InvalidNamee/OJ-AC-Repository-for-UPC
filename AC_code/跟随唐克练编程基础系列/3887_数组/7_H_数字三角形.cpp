#include <cstdio>

int main() {
    int n, t = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%5d", ++t);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 10164
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
