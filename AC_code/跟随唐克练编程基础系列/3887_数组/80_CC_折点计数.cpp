#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int l1, l2, cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (i == 1) scanf("%d", &l1);
        else if (i == 2) scanf("%d", &l2);
        else {
            int l3;
            scanf("%d", &l3);
            if (l2 > l1 && l2 > l3 || l2 < l1 && l2 < l3) cnt++;
            l1 = l2, l2 = l3;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 2054
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1236 kb
****************************************************************/
