#include <cstdio>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; ++i) {
        printf(i % 7 == 0 || i % 10 == 7 ? "pass\n" : "%d\n", i);
    }
    return 0;
}
/**************************************************************
	Problem: 21187
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:1236 kb
****************************************************************/
