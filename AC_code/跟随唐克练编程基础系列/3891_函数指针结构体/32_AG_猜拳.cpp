#include <cstdio>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == b) printf("tie\n");
    else if ((a + 1) % 3 == b % 3) printf("win\n");
    else printf("lose\n");
    return 0;
}
/**************************************************************
	Problem: 11600
	Language: C++
	Result: 正确
	Time:16 ms
	Memory:1236 kb
****************************************************************/
