#include <cstdio>
#include <cstring>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
/**************************************************************
	Problem: 22502
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
