#include <cstdio>
#include <cmath>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int t1 = (c + b - 1) / b, t2 = (a + d - 1) / d;
    if (t1 < t2) printf("WIN\n");
    else printf("LOSE\n");
    return 0;
}

/**************************************************************
	Problem: 1007
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
