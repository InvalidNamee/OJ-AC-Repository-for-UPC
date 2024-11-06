#include <cstdio>

int main() {
    int n, t, cnt = 0;
    scanf("%d%d", &n, &t);
    for (int i = 1; i <= n; ++i) {
        int a;
        scanf("%d", &a);
        cnt += a <= t;
    }
    printf("%d\n", cnt);    
    return 0;
}
/**************************************************************
	Problem: 1044
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
