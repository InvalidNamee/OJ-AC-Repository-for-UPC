#include <cstdio>

int count(int n) {
    int res = 0;
    while (n) {
        res += n % 10 == 1;
        n /= 10;
    }
    return res;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, i, cnt = 0;
        scanf("%d", &x);
        for (i = 1; cnt < x && i < 10000; ++i) {
            cnt += count(i);
        }
        if (i == 10000) printf("zzz\n");
        else printf("%d\n", i - 1);
    }
    return 0;
}
/**************************************************************
	Problem: 9818
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
