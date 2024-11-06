#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
/**************************************************************
	Problem: 22506
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:1236 kb
****************************************************************/
