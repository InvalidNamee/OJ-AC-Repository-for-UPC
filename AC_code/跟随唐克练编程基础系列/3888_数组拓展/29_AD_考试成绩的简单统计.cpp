#include <cstdio>

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        cnt += t >= 90;
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 22566
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
