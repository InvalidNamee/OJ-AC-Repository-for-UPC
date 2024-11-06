#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int l = 1, r = n;
    while (l < r) {
        int mid = l + r >> 1;
        if (mid * (mid + 1) / 2 < n) l = mid + 1;
        else r = mid;

    }
    printf("%d\n", l);
    return 0;
}
/**************************************************************
	Problem: 22519
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
