#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int l1, l2, cnt = 0;
    scanf("%d%d", &l1, &l2);
    for (int i = 3; i <= n; ++i) {
        int l3;
        scanf("%d", &l3);
        if (l2 > l1 && l2 > l3) printf("%d ", l2);
        l1 = l2;
        l2 = l3;
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 11604
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
