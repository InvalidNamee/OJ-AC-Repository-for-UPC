#include <cstdio>

int main() {
    int l, r, p;
    scanf("%d%d%d", &l, &r, &p);
    for (int i = l; i <= r; ++i) {
        if (i % p == 0) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22441
	Language: C++
	Result: 正确
	Time:11 ms
	Memory:1236 kb
****************************************************************/
