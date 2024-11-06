#include <cstdio>

int main() {
    int a, b, r;
    scanf("%d%d%d", &a, &b, &r);
    printf(a >= 2 * r && b >= 2 * r ? "First\n" : "Second\n");
    return 0;
}
/**************************************************************
	Problem: 19942
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
